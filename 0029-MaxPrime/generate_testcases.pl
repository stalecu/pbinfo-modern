use strict;
use warnings;
use Math::Prime::Util qw/prev_prime/;
<<<<<<< HEAD
my $N = 2**25 - 1; 
my $M = 2**17 - 1;
=======
my $N = 2**31 - 1; 
my $M = 2**15 - 1;
>>>>>>> 514ec8b ([0029] MaxPrime)

open my $fh, '>', 'expected.txt' or die $!;
open my $hf, '>', 'input.txt' or die $!;

for my $i (2..$M) {
    my $random = int(1 + rand($N));
<<<<<<< HEAD
    print $hf "$random\n";
    my $a = prev_prime($random);
    my $b = prev_prime($a);
=======
    print $hf "$random\n"; 
    my $a = prev_prime($random);
    my $b = prev_prime($a); 
>>>>>>> 514ec8b ([0029] MaxPrime)
    print $fh "$a $b\n";
}