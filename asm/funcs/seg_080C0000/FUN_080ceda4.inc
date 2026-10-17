@ FUN_080ceda4  entry 0x080ceda4  size 148
.thumb
.org 0xceda4
FUN_080ceda4:
	push {r4, lr}	@ 000ceda4 10b5
.org 0xceda6
	adds r4, r0, #0	@ 000ceda6 041c
.org 0xceda8
	ldr r0, [r4, #84]	@ 000ceda8 606d
.org 0xcedaa
	ldr r1, [r4, #92]	@ 000cedaa e16d
.org 0xcedac
	adds r0, r0, r1	@ 000cedac 4018
.org 0xcedae
	str r0, [r4, #84]	@ 000cedae 6065
.org 0xcedb0
	ldr r0, [r4, #88]	@ 000cedb0 a06d
.org 0xcedb2
	ldr r1, [r4, #96]	@ 000cedb2 216e
.org 0xcedb4
	adds r0, r0, r1	@ 000cedb4 4018
.org 0xcedb6
	str r0, [r4, #88]	@ 000cedb6 a065
.org 0xcedb8
	ldr r0, [pc, #124]	@ 000cedb8 1f48
.org 0xcedba
	adds r1, r4, #0	@ 000cedba 211c
.org 0xcedbc
	adds r1, #84	@ 000cedbc 5431
.org 0xcedbe
	bl 0x1fb14	@ 000cedbe 50f7a9fe
.org 0xcedc2
	movs r1, #128	@ 000cedc2 8021
.org 0xcedc4
	lsls r1, r1, #7	@ 000cedc4 c901
.org 0xcedc6
	cmp r0, r1	@ 000cedc6 8842
.org 0xcedc8
	bls.n 0xcee00	@ 000cedc8 1ad9
.org 0xcedca
	ldrb r1, [r4, #10]	@ 000cedca a17a
.org 0xcedcc
	movs r0, #254	@ 000cedcc fe20
.org 0xcedce
	ands r0, r1	@ 000cedce 0840
.org 0xcedd0
	movs r2, #0	@ 000cedd0 0022
.org 0xcedd2
	movs r1, #253	@ 000cedd2 fd21
.org 0xcedd4
	ands r0, r1	@ 000cedd4 0840
.org 0xcedd6
	strb r0, [r4, #10]	@ 000cedd6 a072
.org 0xcedd8
	adds r0, r4, #0	@ 000cedd8 201c
.org 0xcedda
	adds r0, #140	@ 000cedda 8c30
.org 0xceddc
	str r2, [r0, #0]	@ 000ceddc 0260
.org 0xcedde
	adds r0, #4	@ 000cedde 0430
.org 0xcede0
	str r2, [r0, #0]	@ 000cede0 0260
.org 0xcede2
	adds r0, #4	@ 000cede2 0430
.org 0xcede4
	strb r2, [r0, #0]	@ 000cede4 0270
.org 0xcede6
	ldrb r1, [r4, #10]	@ 000cede6 a17a
.org 0xcede8
	movs r0, #251	@ 000cede8 fb20
.org 0xcedea
	ands r0, r1	@ 000cedea 0840
.org 0xcedec
	strb r0, [r4, #10]	@ 000cedec a072
.org 0xcedee
	ldr r1, [pc, #76]	@ 000cedee 1349
.org 0xcedf0
	ldrb r0, [r4, #9]	@ 000cedf0 607a
.org 0xcedf2
	lsls r0, r0, #2	@ 000cedf2 8000
.org 0xcedf4
	adds r0, r0, r1	@ 000cedf4 4018
.org 0xcedf6
	movs r1, #3	@ 000cedf6 0321
.org 0xcedf8
	str r1, [r4, #12]	@ 000cedf8 e160
.org 0xcedfa
	ldr r0, [r0, #0]	@ 000cedfa 0068
.org 0xcedfc
	ldr r0, [r0, #12]	@ 000cedfc c068
.org 0xcedfe
	str r0, [r4, #20]	@ 000cedfe 6061
.org 0xcee00
	ldr r0, [r4, #84]	@ 000cee00 606d
.org 0xcee02
	ldr r1, [r4, #88]	@ 000cee02 a16d
.org 0xcee04
	bl 0x7c7c	@ 000cee04 38f73aff
.org 0xcee08
	lsls r0, r0, #16	@ 000cee08 0004
.org 0xcee0a
	cmp r0, #0	@ 000cee0a 0028
.org 0xcee0c
	bne.n 0xcee1a	@ 000cee0c 05d1
.org 0xcee0e
	adds r0, r4, #0	@ 000cee0e 201c
.org 0xcee10
	bl 0xcee6c	@ 000cee10 00f02cf8
.org 0xcee14
	lsls r0, r0, #24	@ 000cee14 0006
.org 0xcee16
	cmp r0, #0	@ 000cee16 0028
.org 0xcee18
	beq.n 0xcee2c	@ 000cee18 08d0
.org 0xcee1a
	ldr r1, [pc, #32]	@ 000cee1a 0849
.org 0xcee1c
	ldrb r0, [r4, #9]	@ 000cee1c 607a
.org 0xcee1e
	lsls r0, r0, #2	@ 000cee1e 8000
.org 0xcee20
	adds r0, r0, r1	@ 000cee20 4018
.org 0xcee22
	movs r1, #2	@ 000cee22 0221
.org 0xcee24
	str r1, [r4, #12]	@ 000cee24 e160
.org 0xcee26
	ldr r0, [r0, #0]	@ 000cee26 0068
.org 0xcee28
	ldr r0, [r0, #8]	@ 000cee28 8068
.org 0xcee2a
	str r0, [r4, #20]	@ 000cee2a 6061
.org 0xcee2c
	adds r0, r4, #0	@ 000cee2c 201c
.org 0xcee2e
	bl 0x1cff0	@ 000cee2e 4ef7dff8
.org 0xcee32
	pop {r4}	@ 000cee32 10bc
.org 0xcee34
	pop {r0}	@ 000cee34 01bc
.org 0xcee36
	bx r0	@ 000cee36 0047
