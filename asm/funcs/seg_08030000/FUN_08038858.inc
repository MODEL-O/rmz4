@ FUN_08038858  entry 0x08038858  size 42
.thumb
.org 0x38858
FUN_08038858:
	push {lr}	@ 00038858 00b5
.org 0x3885a
	movs r2, #159	@ 0003885a 9f22
.org 0x3885c
	lsls r2, r2, #1	@ 0003885c 5200
.org 0x3885e
	adds r1, r0, r2	@ 0003885e 8118
.org 0x38860
	ldrb r0, [r1, #0]	@ 00038860 0878
.org 0x38862
	cmp r0, #0	@ 00038862 0028
.org 0x38864
	bne.n 0x3886c	@ 00038864 02d1
.org 0x38866
	movs r0, #152	@ 00038866 9820
.org 0x38868
	lsls r0, r0, #3	@ 00038868 c000
.org 0x3886a
	b.n 0x3887e	@ 0003886a 08e0
.org 0x3886c
	ldrb r0, [r1, #0]	@ 0003886c 0878
.org 0x3886e
	movs r1, #128	@ 0003886e 8021
.org 0x38870
	lsls r1, r1, #1	@ 00038870 4900
.org 0x38872
	subs r1, r1, r0	@ 00038872 091a
.org 0x38874
	lsls r0, r1, #2	@ 00038874 8800
.org 0x38876
	adds r0, r0, r1	@ 00038876 4018
.org 0x38878
	lsls r0, r0, #2	@ 00038878 8000
.org 0x3887a
	subs r0, r0, r1	@ 0003887a 401a
.org 0x3887c
	asrs r0, r0, #2	@ 0003887c 8010
.org 0x3887e
	pop {r1}	@ 0003887e 02bc
.org 0x38880
	bx r1	@ 00038880 0847
