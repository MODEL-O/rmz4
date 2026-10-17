@ FUN_080ffe8c  entry 0x080ffe8c  size 54
.thumb
.org 0xffe8c
FUN_080ffe8c:
	adds r2, r0, #0	@ 000ffe8c 021c
.org 0xffe8e
	ldrb r1, [r2, #10]	@ 000ffe8e 917a
.org 0xffe90
	movs r0, #254	@ 000ffe90 fe20
.org 0xffe92
	ands r0, r1	@ 000ffe92 0840
.org 0xffe94
	movs r1, #0	@ 000ffe94 0021
.org 0xffe96
	strb r0, [r2, #10]	@ 000ffe96 9072
.org 0xffe98
	adds r0, r2, #0	@ 000ffe98 101c
.org 0xffe9a
	adds r0, #140	@ 000ffe9a 8c30
.org 0xffe9c
	str r1, [r0, #0]	@ 000ffe9c 0160
.org 0xffe9e
	adds r0, #4	@ 000ffe9e 0430
.org 0xffea0
	str r1, [r0, #0]	@ 000ffea0 0160
.org 0xffea2
	adds r0, #4	@ 000ffea2 0430
.org 0xffea4
	strb r1, [r0, #0]	@ 000ffea4 0170
.org 0xffea6
	ldrb r1, [r2, #10]	@ 000ffea6 917a
.org 0xffea8
	movs r0, #251	@ 000ffea8 fb20
.org 0xffeaa
	ands r0, r1	@ 000ffeaa 0840
.org 0xffeac
	strb r0, [r2, #10]	@ 000ffeac 9072
.org 0xffeae
	ldr r1, [pc, #20]	@ 000ffeae 0549
.org 0xffeb0
	ldrb r0, [r2, #9]	@ 000ffeb0 507a
.org 0xffeb2
	lsls r0, r0, #2	@ 000ffeb2 8000
.org 0xffeb4
	adds r0, r0, r1	@ 000ffeb4 4018
.org 0xffeb6
	movs r1, #4	@ 000ffeb6 0421
.org 0xffeb8
	str r1, [r2, #12]	@ 000ffeb8 d160
.org 0xffeba
	ldr r0, [r0, #0]	@ 000ffeba 0068
.org 0xffebc
	ldr r0, [r0, #16]	@ 000ffebc 0069
.org 0xffebe
	str r0, [r2, #20]	@ 000ffebe 5061
.org 0xffec0
	bx lr	@ 000ffec0 7047
