@ FUN_080ac8f0  entry 0x080ac8f0  size 54
.thumb
.org 0xac8f0
FUN_080ac8f0:
	push {r4, lr}	@ 000ac8f0 10b5
.org 0xac8f2
	adds r2, r0, #0	@ 000ac8f2 021c
.org 0xac8f4
	ldr r4, [r2, #40]	@ 000ac8f4 946a
.org 0xac8f6
	ldrb r3, [r2, #15]	@ 000ac8f6 d37b
.org 0xac8f8
	cmp r3, #0	@ 000ac8f8 002b
.org 0xac8fa
	bne.n 0xac910	@ 000ac8fa 09d1
.org 0xac8fc
	ldrb r1, [r2, #10]	@ 000ac8fc 917a
.org 0xac8fe
	movs r0, #254	@ 000ac8fe fe20
.org 0xac900
	ands r0, r1	@ 000ac900 0840
.org 0xac902
	strb r0, [r2, #10]	@ 000ac902 9072
.org 0xac904
	adds r0, r2, #0	@ 000ac904 101c
.org 0xac906
	adds r0, #184	@ 000ac906 b830
.org 0xac908
	strb r3, [r0, #0]	@ 000ac908 0370
.org 0xac90a
	ldrb r0, [r2, #15]	@ 000ac90a d07b
.org 0xac90c
	adds r0, #1	@ 000ac90c 0130
.org 0xac90e
	strb r0, [r2, #15]	@ 000ac90e d073
.org 0xac910
	ldr r0, [r4, #84]	@ 000ac910 606d
.org 0xac912
	ldr r1, [r4, #88]	@ 000ac912 a16d
.org 0xac914
	str r0, [r2, #84]	@ 000ac914 5065
.org 0xac916
	str r1, [r2, #88]	@ 000ac916 9165
.org 0xac918
	adds r1, r2, #0	@ 000ac918 111c
.org 0xac91a
	adds r1, #180	@ 000ac91a b431
.org 0xac91c
	movs r0, #1	@ 000ac91c 0120
.org 0xac91e
	strb r0, [r1, #0]	@ 000ac91e 0870
.org 0xac920
	pop {r4}	@ 000ac920 10bc
.org 0xac922
	pop {r0}	@ 000ac922 01bc
.org 0xac924
	bx r0	@ 000ac924 0047
