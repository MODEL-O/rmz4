@ FUN_080387e4  entry 0x080387e4  size 36
.thumb
.org 0x387e4
FUN_080387e4:
	push {lr}	@ 000387e4 00b5
.org 0x387e6
	movs r2, #159	@ 000387e6 9f22
.org 0x387e8
	lsls r2, r2, #1	@ 000387e8 5200
.org 0x387ea
	adds r1, r0, r2	@ 000387ea 8118
.org 0x387ec
	ldrb r0, [r1, #0]	@ 000387ec 0878
.org 0x387ee
	cmp r0, #0	@ 000387ee 0028
.org 0x387f0
	bne.n 0x387f8	@ 000387f0 02d1
.org 0x387f2
	movs r0, #160	@ 000387f2 a020
.org 0x387f4
	lsls r0, r0, #3	@ 000387f4 c000
.org 0x387f6
	b.n 0x38804	@ 000387f6 05e0
.org 0x387f8
	ldrb r0, [r1, #0]	@ 000387f8 0878
.org 0x387fa
	movs r1, #128	@ 000387fa 8021
.org 0x387fc
	lsls r1, r1, #1	@ 000387fc 4900
.org 0x387fe
	subs r1, r1, r0	@ 000387fe 091a
.org 0x38800
	lsls r0, r1, #2	@ 00038800 8800
.org 0x38802
	adds r0, r0, r1	@ 00038802 4018
.org 0x38804
	pop {r1}	@ 00038804 02bc
.org 0x38806
	bx r1	@ 00038806 0847
