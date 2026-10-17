@ FUN_080ac7e4  entry 0x080ac7e4  size 54
.thumb
.org 0xac7e4
FUN_080ac7e4:
	push {r4, lr}	@ 000ac7e4 10b5
.org 0xac7e6
	adds r2, r0, #0	@ 000ac7e6 021c
.org 0xac7e8
	ldr r4, [r2, #40]	@ 000ac7e8 946a
.org 0xac7ea
	ldrb r3, [r2, #15]	@ 000ac7ea d37b
.org 0xac7ec
	cmp r3, #0	@ 000ac7ec 002b
.org 0xac7ee
	bne.n 0xac804	@ 000ac7ee 09d1
.org 0xac7f0
	ldrb r1, [r2, #10]	@ 000ac7f0 917a
.org 0xac7f2
	movs r0, #254	@ 000ac7f2 fe20
.org 0xac7f4
	ands r0, r1	@ 000ac7f4 0840
.org 0xac7f6
	strb r0, [r2, #10]	@ 000ac7f6 9072
.org 0xac7f8
	adds r0, r2, #0	@ 000ac7f8 101c
.org 0xac7fa
	adds r0, #184	@ 000ac7fa b830
.org 0xac7fc
	strb r3, [r0, #0]	@ 000ac7fc 0370
.org 0xac7fe
	ldrb r0, [r2, #15]	@ 000ac7fe d07b
.org 0xac800
	adds r0, #1	@ 000ac800 0130
.org 0xac802
	strb r0, [r2, #15]	@ 000ac802 d073
.org 0xac804
	ldr r0, [r4, #84]	@ 000ac804 606d
.org 0xac806
	ldr r1, [r4, #88]	@ 000ac806 a16d
.org 0xac808
	str r0, [r2, #84]	@ 000ac808 5065
.org 0xac80a
	str r1, [r2, #88]	@ 000ac80a 9165
.org 0xac80c
	adds r1, r2, #0	@ 000ac80c 111c
.org 0xac80e
	adds r1, #180	@ 000ac80e b431
.org 0xac810
	movs r0, #1	@ 000ac810 0120
.org 0xac812
	strb r0, [r1, #0]	@ 000ac812 0870
.org 0xac814
	pop {r4}	@ 000ac814 10bc
.org 0xac816
	pop {r0}	@ 000ac816 01bc
.org 0xac818
	bx r0	@ 000ac818 0047
