Diff

A 1 3 5 7
B 2 4 5 6

Diff a +B
Küme 1 2 3 4 5 7 6

Küme - a
Patch 
B 2 4 5 5 6

patch,bir liste halinde iki dosya arasındaki farklılıkları barındıran bir metin dosyasıdır. ve diff programı ile özgün ve yeni dosya karşılaştırılarak oluşturulur.

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

Header
Users kısmında mkdir .vim yapıcaksın
Open .vim yapacaksın
Plugin’i vim’e ekliyorsun


Çalışma dosyasına bir
Esc yap i yaptıktan sonra
Std yaz tab yap
Hazır oluyor!


C dosyası
Gcc ile derlenir
./a.out yazdığın c kodunu yazdırıyor
Norm tab yazı düzenleme


Ex07
Patch < sw.diff
Patch -R < sw.diff.rej
patch ./a -o ./b < sw.diff
file -m ft_magic 42 (dosya adı)
