Класс Ба Түүний Хэрэглээ Лабораторын Ажил\
(Лаборатори №3)

Г.Энх-Амар

ХШУИС, МКУТ, Програм хангамж, <18b1num0399@stud.num.edu.mn>

1\. ОРШИЛ/УДИРТГАЛ

Объект Хандлагат Програмчлал гол тулгуур болсон Класс хэрэглээтэй
танилцаж, класс объектын ялгаа болон гишүүн функц, гишүүн өгөгдлийн
талаар мэдэж авна.

2\. ЗОРИЛГО\
Оюутан багшийн өгсөн дараах 5 даалгаврыг биелүүлж, ажилтан классыг
ойлгомжтой, уншууртай байдлаар хэрэгжүүлнэ. Үүнд:

1.  Класс гэж юу болох, онцлог, үүргийн талаар бичих,

2.  Класс болон C++ объектын ялгааг тайлбарлах,

3.  Гишүүн функц, гишүүн өгөгдөл хоёр ямар хамааралтай байдаг вэ?
    Өгөгдлийн битүүмжлэл гэж юу вэ? гэсэн асуултанд хариулах,

4.  Классын гишүүн өгөгдөл болон гишүүн функцэд хэрхэн хандах талаах
    бичих,

5.  Ажилчин гэсэн класс тодорхойлно. Ажилчдын ажилласан цаг бүрийг
    өөрчилж цалинг тооцоолох жижиг програм бичих.

3\. ОНОЛЫН СУДАЛГАА

3.1. Класс

C++ хэлнийг объект хандлагат технологийн гол хөдөлгүүр болгодог чухал
шинж нь класс гэж нэрлэгддэг өгөгдөл хийсвэрлэл юм.

Өгөгдлийн бүтэц бол янз бүрийн төрлийн өгөгдлийн нэгдэл юм. Ийм бүтцэн
өгөгдлийг зүйл бүрийн функцээр боловсруулна. Класс нь ийм функц болон
өгөгдлийг хоорондоо холбоотой нэгэн цул битүүмжилсэн логик зүйл гэж
үздэг. Иймд класс бол өгөгдөл ба функцийн нэгдэл, хэрэглэгчийн
тодорхойлох зохиомол өгөгдлийн төрөл юм. Класс нь объектыг хялбар
байгуулах үүрэгтэй.

Класс нь гишүүн өгөгдөл, гишүүн функцийн нэгдэл тул тодорхойлолт дотор
нь өгөгдлийг тодорхойлж, функцийг гол төлөв зарлана.

Классын гол онцлог нь гишүүн өгөгдөлөө далд байдлаар зарлаж, зөвхөн
гишүүн функцаараа дамжуулан уг өгөгдөлд хандах боломжийг олгодог.
Ингэснээр өгөгдлийг санамсаргүй байдлаар өөрчлөхөөс сэргийлэхээс гадна,
програмыг илүү эмх цэгцтэй уншууртай, ойлгомжтой болгож өгдөг.

Классыг зарлахдаа доорх байдлаар зарладаг. Классын гишүүдийн
тодорхойлолт нь private/public/protected хэмээх гурван хэсэгтэй байж
болно. Хэрвээ зааж өгөөгүй бол private байна.

Class class\_name {

...private/prptected/public:

data\_memebers;

Private/publi:

member\_functions;

};

Private, public тусгай үгс классын гишүүдийн үйлчлэх хүрээг заана.
Private гишүүд рүү зөвхөн тухайн класс дотроос, public гишүүд рүү
хаанаас ч хандах боломжтой. Protected түвшин нь тухайн классынхаа хувьд
private түвшинтэй адил боловч тэдгээр нь удамших байдлаараа хоорондоо
ялгаатай.

3.2. Класс болон C++ объектын ялгаа

Хамгийн энгийнээр класс гэдэг нь ямар нэг зүйлийн модель бөгөөд уг
моделийн дагуу үүсэж буй бүтээгдэхүүн зүйлийг объект гэж нэрлэнэ.

Жишээлбэл: амьтан гэх класс нь нэр, хөлний тоо, арьс гэсэн өгөгдлийг
хадгалдаг байя.

class animal {

public:

char name\[20\];

int num\_of\_legs;

char skin\[20\];

};

Энэхүү классыг ашиглан animal cat; cat.name =”cat”, cat.num\_of\_legs =
4, cat.skin=”fur” гэсэн утга өгвөл. Cat гэсэн объект үүснэ.

Animal загвараа дахин ашиглаж animal duck; dove.name=”duck”;
duck.num\_of\_legs = 2; duck.skin=”feather” гэсэн утга өгвөл Duck гэсэн
объект үүснэ.

Эндээс бид класс нь объект үйлдвэрлэгч болохыг харж болно. Харин объект
тухай классынхаа бүтээгдэхүүн юм.

3.3. Гишүүн функц, гишүүн өгөгдөл хоёр ямар хамааралтай байдаг вэ?
Өгөгдлийн битүүмжлэл гэж юу вэ?

Гишүүн өгөгдөл тухайн класстай холбоотой int, float, char гээд ямар
нэгэн өгөгдөлийг хадгалдаг. Гишүүн функц нь гишүүн өгөгдөл дээр
боловсруулалт хийж програмын бусад функцтэй мэдээлэл солилцоно. Классын
гишүүн функц ба гишүүн өгөгдлийг тодорхой түвшинд нээлттэй биш объектийн
нэг хүрээнд оруулсныг өгөгдлийн битүүмжлэл гэнэ. Өөрөөр хэлбэл, объектын
гишүүн өгөгдөлд зөвхөн гишүүн функцээр нь дамжуулан хандана гэсэн үг.
Битүүмжилснээр өгөгдөлд хандах эрхийг хязгаарлах боломж олгоно. Иймд
битүүмжлэл бол функц, өгөгдлийг тодорхой түвшинд нээлттэй биш объектын
хүрээнд хамтад нь холбоотойгоор авч үздэг ойлголт юм.

3.4. Классын гишүүн өгөгдөл болон гишүүн функцэд хэрхэн хандах вэ?

Гишүүн өгөгдөл болон гишүүн функц нь public хэлбэрээр тодорхойлогдсон
бол объектоор нь дамжуулан ханддаг. Хэрвээ private хэлбэрээр зарлагдсан
гишүүн байвал тухайн гишүүн рүү public хэлбэрээр зарлагдсан функцаар
дуудан хандах боломжтой.

4\. ХЭРЭГЖҮҮЛЭЛТ

**Бодлого : Ажилчин гэсэн класс тодорхойлно. Ажилчдын ажилласан цаг
бүрийг өөрчилж цалинг тооцоолох жижиг програм бич.**

1\) Энэхүү программыг C++ хэл дээр бичих бөгөөд гараас утга авах, хэвлэх
зорилгоор &lt;iostream&gt;, дэлгцэнд хэвлэхдээ хүснэгтэн байдлаар
хэвлэхийн тулд &lt;iomanip&gt;, text харьцуулах, хуулах зорилгоор
&lt;cstring&gt; гэсэн сангуудыг ашиглана.

Employee нэртэй класс зарлахдаа private хэлбэрээр гишүүн өгөгдөл болох
ажилтны ID, нэр, албан тушаал, ажилсан цаг, цагийн хөлс зэрэг мэдээллийг
авна. Харин public хэлбэрээр гишүүн функцуудаа тодорхойлох болно.
Захиралын үндсэн цалинг кодын дээд хэсэгт \#DEFINE
DIRECTOR\_BASE\_SALARY 2000 өгсөн учир үндсэн цалин нь 2000 болно.

Гишүүн функцууд нь дараах үүрэгтэй:

-   Void initialize() Тухайн ажилтны мэдээллийг 0, “” гэсэн гарааны
    утга өгнө.

-   Void getdate() Тухайн ажилтанд мэдээлэл нэмнэ

-   Void showdata() Тухайн ажилтны мэдээллийг хэвлэнэ

-   Float calculate() Тухайн ажилтны цалинг тооцооно. Ажилсан
    цаг\*Цагийн хөлс

-   Float calculate\_dir() Захиралын цалинг тооцно. Ажилтсан цаг\*Цагийн
    хөлс + Үндсэн

-   Bool add\_hours() 0-24 утга авах ёстой бөгөөд тэр утгаа ажилсан цаг
    дээр нэмээд 1 гэсэн утга буцаана. Хэрвээ 0-24 хооронд байхгүй бол
    ажилсан цаг дээр нэмэхгүй бөгөөд 0 гэсэн утга буцаана.

Class хүснэгтийг доорх байдлаар зарлана.

-   class employee

-   {

-       private:

-           int id;

-           char name\[20\];

-           char position\[10\];

-           float worked\_hours;

-           float hourly\_wage;

-       public:

-           void initialize();

-           void getdata();

-           void showdata();

-           float calculate();

-           float calculate\_dir(float);

-           bool add\_hours(float);

-   };

Employee классын INITIALIZE() функц тухайн ажилтанд гарааны утгыг өгөх
ёстой учир. Тоон төрлийн өгөгдлийг 0 болгож, Үсгэн төрлийн өгөгдлийг “”
болгоно.

void employee::initialize()

{

    id = 0; // Тоон төрлийн өгөгдөл

    strcpy(name, ""); // cstring сангийн функц бөгөөд “” утгыг

    strcpy(position, ""); // name, position-д өгнө

    worked\_hours = 0; //

    hourly\_wage = 0; //

}

Employee классын GETDATA() функц тухайн ажилтанд гараас утга өгөх болно.
C++ хэлний cin, cout ашиглахад хялбар шийдэгдэнэ.

Employee классын CALCULATE() функц тухайн ажилтны цалинг тооцох болно.
Хэрвээ уг ажилтан нь захирал CALCULATE\_DIR() функцийг дуудна. Захиралын
мөн эсэхийг шалгахын тулд cstring сангийн strcmp(position, “Director”)
== 0 гэсэн нөхцөлийг хангаж байгаа эсэхийг шалгана. Энэ нь position-г
Director гэсэн өгөгдөлтэй ASCII кодоор жишиж ялгааг тоон утгаар
харуулдаг. Ялгаа байхгүй бол 0 гэсэн утга буцаана. Тэгэхээр захирал мөн
бол 0 гэсэн утга буцна.

float employee::calculate\_dir(float dir\_per\_hour)

{

    float total = dir\_per\_hour\*worked\_hours + DIRECTOR\_BASE\_SALARY;

    return total;

}

float employee::calculate()

{

    if (strcmp(position, "Director") == 0 || strcmp(position, "director") == 0)

    {

        return calculate\_dir(hourly\_wage);

    }

    return worked\_hours\*hourly\_wage;

}

Employee классын ADD\_HOURS() функц 0-24 гэсэн утга авч байгаа эсэхийг
шалгаж, тийм байвал ажилсан цаг дээр тухайн утгыг нэмээд 1 гэсэн утга
буцаадаг, эсрэг тохиолдолд 0 гэсэн утга буцаадаг.

bool employee::add\_hours(float adding\_hours)

{

    if (adding\_hours &gt;= 0 && adding\_hours &lt;= 24)

    {

        worked\_hours += adding\_hours;

        return 1;

    }

    return 0;

}

Employee классын showdate() функц нь тухайн ажилтны мэдээллийг
харуулдаг. Энэ хэсгийг энгийн cout-аар хийв.

void employee::showdata()

{

    int grosspay = calculate();

    cout &lt;&lt; setw(15) &lt;&lt; id; // Ажилтны дугаар

    cout &lt;&lt; setw(20) &lt;&lt; name; // Нэр

    cout &lt;&lt; setw(20) &lt;&lt; position; // Албан тушаал

    cout &lt;&lt; setw(15) &lt;&lt; worked\_hours; // Ажилсан цаг

    cout &lt;&lt; setw(18) &lt;&lt; hourly\_wage; // Цагийн хөлс

    cout &lt;&lt; setw(10) &lt;&lt; grosspay; // Нийт цалин

    cout &lt;&lt; endl;

}

2)

Програм маань анх ажилахдаа хэдэн ажилтан байгааг асууж ажилтан классаар
үүссэн объект болгондоо гарааны утга оноосон.

![](media/image1.png){width="7.884027777777778in"
height="4.881944444444445in"}

Объектонд гарааны утгах оноох функц алдаагүй ажиллаж байна.

![](media/image2.png){width="7.031650262467192in"
height="1.6319444444444444in"}

Программын ажилсан цагийг нэмэх хэсэг асуудалгүй ажиллаж байна.

![](media/image3.png){width="6.493055555555555in"
height="4.076388888888889in"}

5\. ДҮГНЭЛТ

Объект хандлагат технологийн чухал хэсэг болох КЛАСС-ын тусламжтай бид
ямархуу объект үүсгэх вэ гэдгийг загварчлах боломжтой. Класс өгөгдлийн
төрөл, харин объект хувьсагчтай адил үйлчилж байна. Мөн объектын private
гишүүдрүү гаднаас хандах боломжгүй учир өгөгдлийг санамсаргүй байдлаар
өөрчлөхөөс сэргийлдэг.

6\. АШИГЛАСАН МАТЕРИАЛ

1.  Объект хандлагат технологийн С++ програмчлал, Ж.Пүрэв,
    2008, Улаанбаатар.

2.  <http://mmunkherdene.blogspot.com/2013/06/m-obiekt-handlagat-pragramchlal.html>

3.  Iomanip setw, <https://www.cplusplus.com/reference/iomanip/setw/>

7\. ХАСВРАЛТ

\#include &lt;iostream&gt;

\#include &lt;iomanip&gt;

\#include &lt;cstring&gt;

\#define DIRECTOR\_BASE\_SALARY 2000

using namespace std;

class employee

{

    private:

        int id;

        char name\[20\];

        char position\[10\];

        float worked\_hours;

        float hourly\_wage;

    public:

        void initialize();

        void getdata();

        void showdata();

        float calculate();

        float calculate\_dir(float);

        bool add\_hours(float);

};

void employee::initialize()

{

    id = 0;

    strcpy(name, "");

    strcpy(position, "");

    worked\_hours = 0;

    hourly\_wage = 0;

}

void employee::getdata()

{

    cout &lt;&lt; "\\nEnter the Employee ID: ";

    cin &gt;&gt; id;

    cout &lt;&lt; "Enter the Employee Name: ";

    cin &gt;&gt; name;

    cout &lt;&lt; "Enter the Position: ";

    cin &gt;&gt; position;

    cout &lt;&lt; "Enter the Worked Hours: ";

    cin &gt;&gt; worked\_hours;

    cout &lt;&lt; "Enter the Hourly Wage: ";

    cin &gt;&gt; hourly\_wage;

}

float employee::calculate\_dir(float dir\_per\_hour)

{

    float total = dir\_per\_hour\*worked\_hours + DIRECTOR\_BASE\_SALARY;

    return total;

}

float employee::calculate()

{

    if (strcmp(position, "Director") == 0 || strcmp(position, "director") == 0)

    {

        return calculate\_dir(hourly\_wage);

    }

    return worked\_hours\*hourly\_wage;

}

bool employee::add\_hours(float adding\_hours)

{

    if (adding\_hours &gt;= 0 && adding\_hours &lt;= 24)

    {

        worked\_hours += adding\_hours;

        return 1;

    }

    return 0;

}

void employee::showdata()

{

    int grosspay = calculate();

    cout &lt;&lt; setw(15) &lt;&lt; id;

    cout &lt;&lt; setw(20) &lt;&lt; name;

    cout &lt;&lt; setw(20) &lt;&lt; position;

    cout &lt;&lt; setw(15) &lt;&lt; worked\_hours;

    cout &lt;&lt; setw(18) &lt;&lt; hourly\_wage;

    cout &lt;&lt; setw(10) &lt;&lt; grosspay;

    cout &lt;&lt; endl;

}

void heading()

{

    cout &lt;&lt; endl;

    for (int k = 0; k &lt; 99; k++)

        cout &lt;&lt; "-";

    cout &lt;&lt; endl;

    cout &lt;&lt; setw(15) &lt;&lt; "Employee ID";

    cout &lt;&lt; setw(20)  &lt;&lt; "Employee Name";

    cout &lt;&lt; setw(20) &lt;&lt; "Position";

    cout &lt;&lt; setw(15) &lt;&lt; "Hours";

    cout &lt;&lt; setw(18) &lt;&lt; "Hourly Wage";

    cout &lt;&lt; setw(10) &lt;&lt; "Gross";

    cout &lt;&lt; endl;

    for (int k = 0; k &lt; 99; k++)

        cout &lt;&lt; "-";

    cout &lt;&lt; endl;

}

int main()

{

    int num\_of\_employees;

    cout &lt;&lt; "Enter number of employees: ";

    cin &gt;&gt; num\_of\_employees;

    employee emp\[num\_of\_employees\];

    for (int k = 0; k&lt;num\_of\_employees; k++)

        emp\[k\].initialize();

    int choose, row\_num;

    float hours\_to\_add;

    while (1)

    {

        cout &lt;&lt; "\\n1: Show all, 2: Initialize, 3: Insert Data, 4: Add worked hours, 5: Exit\\n";

        cin &gt;&gt; choose;

        switch (choose)

        {

        case 1:

            heading();

            for (int k = 0; k&lt;num\_of\_employees; k++)

                emp\[k\].showdata();

            break;

        case 2:

            cout &lt;&lt; "Enter the row number: ";

            cin &gt;&gt; row\_num;

            emp\[row\_num-1\].initialize();

            cout &lt;&lt; "Succeed!\\n";

            break;

        case 3:

            cout &lt;&lt; "Enter the row number: ";

            cin &gt;&gt; row\_num;

            emp\[row\_num-1\].getdata();

            break;

        case 4:

            cout &lt;&lt; "Enter the row number: ";

            cin &gt;&gt; row\_num;

            cout &lt;&lt; "Enter the amount of hours: ";

            cin &gt;&gt; hours\_to\_add;

            if (emp\[row\_num-1\].add\_hours(hours\_to\_add))

                cout &lt;&lt; "Succeed!\\n";

            else cout &lt;&lt; "INSERT VALUE BETWEEN 0 AND 24";

            break;

        default:

            exit(0);

        }

    }

    return 0;

}
