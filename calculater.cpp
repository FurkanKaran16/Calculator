#include "calculater.h"
#include "ui_calculater.h"

double calcVal = 0.0;
bool divTrigger = false;
bool multTrigger = false;
bool subTrigger = false;
bool addTrigger = false;

Calculater::Calculater(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculater)
{
    ui->setupUi(this);

    ui->Display->setText(QString::number(calcVal));
    QPushButton *numButtons[10]; // 10 tane buton var 0 dan 9 a
    for(int i = 0; i < 10; ++i){
        QString butName = "Button" +QString::number(i); // Buttonlarin ismine gore alip dizeye ekler,QString::number stringden numbera donusturur
        numButtons[i] = Calculater::findChild <QPushButton *>(butName);
        connect(numButtons[i],SIGNAL(released()),this,SLOT(NumPressed())); // dugmelere basildiginda NumPressed calisir
        /* Kullanici bir dugmeye bastiginda released() sinyali yayilir.
        connect sayesinde bu sinyal, NumPressed() slotunu tetikler.
        Slot icinde, hangi dugmeye basildigi belirlenir ve buna uygun islem yapilir (rrnegin, rakam ekleme).
        Bu mekanizma Qt'nin event-driven programming (olay tabanli programlama) paradigmasini temel alir.*/
    }
    connect(ui->Add,SIGNAL(released()),this,SLOT(MathButtonPressed()));
    connect(ui->Subtract,SIGNAL(released()),this,SLOT(MathButtonPressed()));
    connect(ui->Multiply,SIGNAL(released()),this,SLOT(MathButtonPressed()));
    connect(ui->Divide,SIGNAL(released()),this,SLOT(MathButtonPressed()));
    connect(ui->Equal,SIGNAL(released()),this,SLOT(EqualButtonPressed()));
    connect(ui->SquareRoot,SIGNAL(released()),this,SLOT(SquareRootPressed()));
    connect(ui->Clear,SIGNAL(released()),this,SLOT(ClearPressed()));
    connect(ui->Minus, SIGNAL(released()), this, SLOT(MinusPressed()));
    connect(ui->Dot, SIGNAL(released()), this, SLOT(DotPressed()));
}

Calculater::~Calculater() // Calculater sınıfının destrüktörü tanımlanıyor. C++'da destrüktör, bir nesne yok edilmeden önce çağrılır.
{                         //  Destructor adı, sınıf adıyla aynı olur ancak başında ~ işareti bulunur.
    delete ui;
}

void Calculater::NumPressed(){
    QPushButton *button = (QPushButton *) sender(); // basilan dugmeye isaretci gonderir
    QString butVal = button->text(); // dugmedeki sayiyi alir
    QString displayVal = ui->Display->text(); // degeri ekranda gosterir
    if((displayVal.toDouble() == 0 ) || (displayVal.toDouble() == 0.0 )){
        ui->Display->setText(butVal); // metni dugmenin degeri neyse ona ayarlar
    }
    else {
        QString newVal = displayVal + butVal;
        double dblNewVal = newVal.toDouble();
        ui->Display->setText(QString::number(dblNewVal,'g',16));
    } // 'g' (bicimlendirme turu), 16 (hassasiyet) donusumde kullanilacak maksimum anlamli basamak sayisini belirtir.
}

void Calculater::MathButtonPressed(){
    divTrigger = false;
    multTrigger = false;
    addTrigger = false;
    subTrigger = false;
    QString displayVal = ui->Display->text();
    calcVal = displayVal.toDouble();
    QPushButton *button = (QPushButton *) sender();
    QString butVal = button->text(); // matematik sembolunu yazar ekrana
    if(QString::compare(butVal,"/",Qt::CaseInsensitive) == 0 ){
        divTrigger = true;
    } else if(QString::compare(butVal,"*",Qt::CaseInsensitive) == 0 ){
        multTrigger = true;
    } else if(QString::compare(butVal,"+",Qt::CaseInsensitive) == 0 ){
        addTrigger = true;
    } else{
        subTrigger = true;
    }
    ui->Display->setText("");
}

void Calculater::EqualButtonPressed(){
    double solution = 0.0;
    QString displayVal = ui->Display->text();
    double dblDisplayVal = displayVal.toDouble();
    if(addTrigger || multTrigger || subTrigger || divTrigger){
        if(addTrigger){solution = calcVal + dblDisplayVal;}
        else if (subTrigger){solution = calcVal - dblDisplayVal;}
        else if (multTrigger){solution = calcVal * dblDisplayVal;}
        else{solution = calcVal / dblDisplayVal;}
    }
    ui->Display->setText(QString::number(solution));
}

void Calculater::SquareRootPressed(){
    QString displayVal = ui->Display->text();
    double dblDisplayVal = displayVal.toDouble();

    if (dblDisplayVal < 0) {
        ui->Display->setText("Error"); // Negatif sayilarin karekoku gercek sayi degildir
        return;
    }

    double solution = qSqrt(dblDisplayVal); // Qt'de karekok icin qSqrt fonksiyonu kullanilir
    ui->Display->setText(QString::number(solution, 'g', 16));
}


void Calculater::ClearPressed() {
    calcVal = 0.0; // Hesaplama degiskenini sifirla
    ui->Display->setText(QString::number(calcVal)); // Ekranı sıfırla
    divTrigger = false;
    multTrigger = false;
    subTrigger = false;
    addTrigger = false;
}

void Calculater::MinusPressed() {
    QString displayVal = ui->Display->text(); // Mevcut ekran değerini al
    double dblDisplayVal = displayVal.toDouble();

    // Eger ekrandaki sayi pozitifse negatif yap
    if (dblDisplayVal > 0) {
        displayVal = "-" + displayVal;
    }
    // Eger sayi negatifse "-" isaretini kaldir
    else if (dblDisplayVal < 0) {
        displayVal = displayVal.remove(0, 1); // İlk karakteri (yani "-") kaldır
    }

    // Yeni değeri ekrana yaz
    ui->Display->setText(displayVal);
}


void Calculater::DotPressed() {
    QString displayVal = ui->Display->text(); // Mevcut ekran değerini al

    // Eğer ekrandaki sayı zaten "." içeriyorsa yeni bir "." eklenmez
    if (!displayVal.contains(".")) {
        displayVal += "."; // "." ekle
        ui->Display->setText(displayVal);
    }
}

/*
    void Calculater::on_Clear_clicked() // Auto-Connect
{
    // connect(ui->Clear,SIGNAL(released()),this,SLOT(ClearPressed())); gerek kalmaz. obje yerinden go to slota bas yeter

    calcVal = 0.0; // Hesaplama değişkenini sıfırla
    ui->Display->setText(QString::number(calcVal)); // Ekranı sıfırla
    divTrigger = false;
    multTrigger = false;
    subTrigger = false;
    addTrigger = false;
}
*/
