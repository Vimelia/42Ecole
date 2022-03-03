Diff

A 1 3 5 7
B 2 4 5 6

Diff a +B
Küme 1 2 3 4 5 7 6

Küme - a
Patch 
B 2 4 5 5 6

patch,bir liste halinde iki dosya arasındaki farklılıkları barındıran bir metin dosyasıdır. 
ve diff programı ile özgün ve yeni dosya karşılaştırılarak oluşturulur.

------------------------------------------------------------------------------
 pwd dosya yolu gösterir
cd dosya içine girme
mkdir klasör oluşturma
touch dosya oluşturma
vim dosya içerisine girme
İ dosya içerisine yazı yazma
Esc / :wq + enter klasöre geri dönme
 
cat dosya içeriğini görüntülenmesini sağlar
ls -l dosya içeriğini özellikleriyle listeler
:wq! Zorla çıkış

chmod dosya izinlerini değiştirme komutu
    r=4 w=2 x=1 rwx okuma yazma çalıştırma  izni
-1—-2—-3—-= gruplandırma
1 sahip izni 2 grup izni 3 diğßer kullanıcı erişimi

touch -t ->dosya ve klasörde tarih değiştirme
touch -h ->kopya klasörün tarihini değiştirme
Tar -cf dosyaismi.tar dosyaismi2 ->dosyayı tarlamak için kullanılır
ln -s test0 test6 ->test0’ı kopyalama
ln test3 test5 -> test3’ü kopyalama 

klist > klist.txt 
S-xattr -c* @kaldırma
mkfile 1 test3 -> içindeki byte değiştirme
Echo text >> .gitignore

------------------------------------------------------------------------

##Header
Users kısmında mkdir .vim yapıcaksın
Open .vim yapacaksın
Plugin’i vim’e ekliyorsun


Çalışma dosyasına bir
Esc yap i yaptıktan sonra
Std yaz tab yap
Hazır oluyor!


##C dosyası
Gcc ile derlenir
./a.out yazdığın c kodunu yazdırıyor
Norm tab yazı düzenleme


##Ex07
Patch < sw.diff
Patch -R < sw.diff.rej
patch ./a -o ./b < sw.diff
file -m ft_magic 42 (dosya adı)

***********************************************************************************************************************************************************
___________________________________________________________________________________________________________________________________________________________
???????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????
___________________________________________________________________________________________________________________________________________________________
***********************************************************************************************************************************************************


tr,
 genellikle aynı uzunlukta olan iki karakter kümesini kabul eder ve ilk kümelerin karakterlerini ikinci kümedeki karşılık gelen karakterlerle değiştirir.
SET, temel olarak ters eğik çizgiden kaçan karakterler de dahil olmak üzere temelde bir karakter dizesidir.
Aşağıdaki örnekte, tr, ilk kümedeki karakterleri ikinci kümedeki eşleşenlerle eşleştirerek standart girişteki (linuxize) tüm karakterlerin yerini alacaktır.
echo 'linuxize' | tr 'lin' 'red'
Her l oluşumu, r, i ile e ve n, d :
reduxeze
-d ( --delete ) seçeneği --delete belirtilen karakterleri silmesini söyler. Karakterleri sıkmadan silerken, yalnızca bir set belirtin.
Bir dosyadaki kelime, byte ve satırları saymak için “wc” komutu kullanılır. Kullanım şekli;
wc [OPTION]... [FILE]...
 
şeklindedir.
 
c:  Dosyadaki byteları sayar.
l :  Dosyadaki satırları sayar.
w: Dosyadaki kelimeleri sayar. 
 L: Dosya içindeki en uzun satırın boyutunu gösterir.
----------------------------
Bc basic calculator
----------------------------
AWK kullanımı ve amacı
Linux’ta her şey bir dosya olduğundan dosya içindeki ayarların bulunması, listelenmesi zaman alabilir.
Bu durumda dosya içindeki istenilen değeri almak, listelemek için geniş bir kullanımı olan awk komutunu kullanmak faydalı olacaktır.
Adları listelemek için sadece $1 değişkenini kullanmak yeterli olacaktır.
awk '{print $1}' liste.txt
Awk varsayılan ayraç olan boşluk ile değerleri bölecek ve dolar işareti ($) ve sütun sırası ($1, $2,… ,$n) ile erişmeye imkan verecektir.
Komutlar içerisinde kullanabileceğiniz length, NR ve NF’den bahsetmek gerekirse; length belirtilen satırdaki karakter sayısını, NR satır sayısını, NF ise satırdaki boşlukla ayrılmış alan sayısını verecektir.
---------------------------
grep Komutu Nasıl Kullanılır?
Unix ailesine ait grep komutu en kullanışlı ve çok yönlü araçlardan biridir. Bir yazı dosyasında tanımladığınız bir kalıbı arar. Diğer bir deyişle, grep komutu ile bir kelime veya kalıbı arayabilir ve buna sahip olan satır veya satırları bastırabilirsiniz.
İlk görüşte az kullanışlı bir komut gibi gözükebilir ancak çeşitli yapılandırma dosyalarıyla birçok hizmetlerle çalışan sistem yöneticileri grep’i sorgu veya bu dosyalardaki çeşitli satırları aramak için kullanır.
-i – arama büyük küçük harfe duyarlı olmayacaktır. Yani eğer “araba” kelimesi için arama yapmak istiyorsanız “ARABA” da aynı sonucu verecektir.
-c – sadece aranan kalıbın bulunduğu satır sayısını gösterecektir
-r – mevcut dizinde yinelemeli aramayı etkinleştirir
-n – satırlar için arama yapın ve aramanıza uyan satırları alın
-v parametresi ile belirtilen harf/kelimenin haricindeki veriler yazdırılır.
------------------------------
Cut Komutu
Bir dosya içerisindeki satırların içerdiği alanları keserek belirli bir yere kopyalamak için kullanılır.Kesme işlemi bazı ayıraçlara göre olabildiği gibi, sabit uzunluktaki alanlara göre de
yapılabilir.
Kullanımı
cut [seçenekler] [dosya] biçiminde tanımlıdır.
Seçenekler
-b : Karakter konumlarını belirler.Byte tipinde işlem yaparak karakterleri byte birimiyle algılar.
-c : Karakter konumlarını belirler.Byte tipinde işlem yaparak karakterleri karakter olarak algılar.
-f : Özel bir ayıraçla ayrılan alanları tanımlamak amacıyla kullanılır.
-d : Ayıraçları tanımlamak için kullanılır.
-s : -f seçeneği kullanıldığı durumlarda, ayıraca sahip olmayan satırların atlanmasını sağlar.
-n : Tek byte’tan fazla olan karakterleri tamamiyle alır.
-------------------------------
Sed
sedborulu giriş veya metin dosyaları üzerinde çalışan bir akış düzenleyicidir. Bununla birlikte, etkileşimli bir metin düzenleyici arayüzüne sahip değildir. Bunun yerine, metin içinde çalışırken izlemesi için talimatlar veriyorsunuz. Bunların tümü Bash ve diğer komut satırı kabuklarında çalışır.
İle sedaşağıdakilerin tümünü yapabilirsiniz:
Metin seç
İkame metin
Metne satır ekle
Metinden satırları sil
Orijinal bir dosyayı değiştirin (veya koruyun)
Dosyadan bazı satırları seçmek için, seçmek istediğimiz aralığın başlangıç ​​ve bitiş satırlarını sağlıyoruz. Tek bir numara, o satırı seçer.
Birden dörde kadar olan satırları çıkarmak için şu komutu yazıyoruz:
sed -n '1,4p' coleridge.txt
İlk olarak, borudan bir echometin göndermek için kullanacağız ve metnin  bir kısmını değiştireceğiz. Bunu yapmak için aşağıdakileri yazıyoruz:sedsed
echo howtogonk | sed 's / gonk / geek /'
echoKomut içine “howtogonk” gönderir sedve bizim basit ikame kuralı ( “s” ikame açılımı) uygulanır. sed Giriş metninde ilk dizenin geçtiği yeri arar ve eşleşmeleri ikinciyle değiştirir.
"Gonk" dizesi "geek" ile değiştirilir ve yeni dizi terminal penceresinde yazdırılır.
-------------------------------
Rev
Linux kullanıcısının rev komutu metin dizelerini tersine çevirir. Bu komut, sağlanan metin veya dosya üzerinde çalışabilir ve aldatıcı bir şekilde basit görünür. Ancak birçok komut satırı yardımcı programı gibi, gerçek gücü diğer komutlarla birleştirdiğinizde görünür hale gelir.
rev komut, ilk bakışta tuhaf bir şey gibi görünen basit Linux yardımcı programlarından biridir. Tek bir işlev gerçekleştirir: dizeleri tersine çevirir. Ayrıca, hızlı bir yardım sayfası yazdırabilmenin dışında (-h) ve sürüm numarasını (-V), herhangi bir komut satırı seçeneğini kabul etmez.
-------------------------------
Touch \"\\\?\$\*\'MaRViN\'\*\$\?\\\"
echo -n 42 > \"\\\?\$\*\'MaRViN\'\*\$\?\\\"
--------------------------------
