use strict;
use warnings;
my $N = 2**5 - 1; 
my $M = 2**15 - 1;

open my $fh, '>', 'expected.txt' or die $!;
open my $hf, '>', 'input.txt' or die $!;

for my $i (2..$M) {
    my $n = int(1 + rand($N));
    my $k = int(1 + rand($N/2));  
    print $hf "$n $k\n"; 
    my @div = ();
    my $num = $k;
    while (@div < $n) {
        push @div, $num;
        $num += $k;
    }
    print $fh join(" ", reverse @div), "\n";
}