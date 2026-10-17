@ FUN_08099fa4  entry 0x08099fa4  size 72
.thumb
.org 0x99fa4
FUN_08099fa4:
	push {lr}	@ 00099fa4 00b5
.org 0x99fa6
	adds r2, r0, #0	@ 00099fa6 021c
.org 0x99fa8
	ldrb r0, [r2, #16]	@ 00099fa8 107c
.org 0x99faa
	cmp r0, #3	@ 00099faa 0328
.org 0x99fac
	bhi.n 0x99fdc	@ 00099fac 16d8
.org 0x99fae
	adds r0, r2, #0	@ 00099fae 101c
.org 0x99fb0
	adds r0, #140	@ 00099fb0 8c30
.org 0x99fb2
	ldr r0, [r0, #0]	@ 00099fb2 0068
.org 0x99fb4
	movs r1, #128	@ 00099fb4 8021
.org 0x99fb6
	lsls r1, r1, #2	@ 00099fb6 8900
.org 0x99fb8
	ands r0, r1	@ 00099fb8 0840
.org 0x99fba
	cmp r0, #0	@ 00099fba 0028
.org 0x99fbc
	beq.n 0x99fdc	@ 00099fbc 0ed0
.org 0x99fbe
	ldr r1, [pc, #24]	@ 00099fbe 0649
.org 0x99fc0
	ldrb r0, [r2, #9]	@ 00099fc0 507a
.org 0x99fc2
	lsls r0, r0, #2	@ 00099fc2 8000
.org 0x99fc4
	adds r0, r0, r1	@ 00099fc4 4018
.org 0x99fc6
	movs r1, #2	@ 00099fc6 0221
.org 0x99fc8
	str r1, [r2, #12]	@ 00099fc8 d160
.org 0x99fca
	ldr r0, [r0, #0]	@ 00099fca 0068
.org 0x99fcc
	ldr r0, [r0, #8]	@ 00099fcc 8068
.org 0x99fce
	str r0, [r2, #20]	@ 00099fce 5061
.org 0x99fd0
	adds r0, r2, #0	@ 00099fd0 101c
.org 0x99fd2
	bl 0x99ff4	@ 00099fd2 00f00ff8
.org 0x99fd6
	b.n 0x99fec	@ 00099fd6 09e0
.org 0x99fd8
	.byte 0x40,0xdb,0x85,0x08	@ 00099fd8 data
.org 0x99fdc
	ldr r0, [pc, #16]	@ 00099fdc 0448
.org 0x99fde
	ldrb r1, [r2, #16]	@ 00099fde 117c
.org 0x99fe0
	lsls r1, r1, #2	@ 00099fe0 8900
.org 0x99fe2
	adds r1, r1, r0	@ 00099fe2 0918
.org 0x99fe4
	ldr r1, [r1, #0]	@ 00099fe4 0968
.org 0x99fe6
	adds r0, r2, #0	@ 00099fe6 101c
.org 0x99fe8
	bl 0x128f80	@ 00099fe8 8ef0caff
