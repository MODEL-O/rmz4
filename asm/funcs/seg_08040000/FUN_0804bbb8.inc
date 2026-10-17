@ FUN_0804bbb8  entry 0x0804bbb8  size 48
.thumb
.org 0x4bbb8
FUN_0804bbb8:
	adds r2, r0, #0	@ 0004bbb8 021c
.org 0x4bbba
	adds r0, #140	@ 0004bbba 8c30
.org 0x4bbbc
	movs r1, #0	@ 0004bbbc 0021
.org 0x4bbbe
	str r1, [r0, #0]	@ 0004bbbe 0160
.org 0x4bbc0
	adds r0, #4	@ 0004bbc0 0430
.org 0x4bbc2
	str r1, [r0, #0]	@ 0004bbc2 0160
.org 0x4bbc4
	adds r0, #4	@ 0004bbc4 0430
.org 0x4bbc6
	strb r1, [r0, #0]	@ 0004bbc6 0170
.org 0x4bbc8
	ldrb r1, [r2, #10]	@ 0004bbc8 917a
.org 0x4bbca
	movs r0, #251	@ 0004bbca fb20
.org 0x4bbcc
	ands r0, r1	@ 0004bbcc 0840
.org 0x4bbce
	movs r1, #254	@ 0004bbce fe21
.org 0x4bbd0
	ands r0, r1	@ 0004bbd0 0840
.org 0x4bbd2
	strb r0, [r2, #10]	@ 0004bbd2 9072
.org 0x4bbd4
	ldr r1, [pc, #16]	@ 0004bbd4 0449
.org 0x4bbd6
	ldrb r0, [r2, #9]	@ 0004bbd6 507a
.org 0x4bbd8
	lsls r0, r0, #2	@ 0004bbd8 8000
.org 0x4bbda
	adds r0, r0, r1	@ 0004bbda 4018
.org 0x4bbdc
	movs r1, #4	@ 0004bbdc 0421
.org 0x4bbde
	str r1, [r2, #12]	@ 0004bbde d160
.org 0x4bbe0
	ldr r0, [r0, #0]	@ 0004bbe0 0068
.org 0x4bbe2
	ldr r0, [r0, #16]	@ 0004bbe2 0069
.org 0x4bbe4
	str r0, [r2, #20]	@ 0004bbe4 5061
.org 0x4bbe6
	bx lr	@ 0004bbe6 7047
