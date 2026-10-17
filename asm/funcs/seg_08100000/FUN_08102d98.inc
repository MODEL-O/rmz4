@ FUN_08102d98  entry 0x08102d98  size 118
.thumb
.org 0x102d98
FUN_08102d98:
	push {r4, r5, r6, lr}	@ 00102d98 70b5
.org 0x102d9a
	adds r6, r0, #0	@ 00102d9a 061c
.org 0x102d9c
	adds r0, #190	@ 00102d9c be30
.org 0x102d9e
	movs r5, #0	@ 00102d9e 0025
.org 0x102da0
	movs r2, #246	@ 00102da0 f622
.org 0x102da2
	lsls r2, r2, #7	@ 00102da2 d201
.org 0x102da4
	strh r2, [r0, #0]	@ 00102da4 0280
.org 0x102da6
	adds r1, r6, #0	@ 00102da6 311c
.org 0x102da8
	adds r1, #192	@ 00102da8 c031
.org 0x102daa
	ldr r0, [pc, #100]	@ 00102daa 1948
.org 0x102dac
	strh r0, [r1, #0]	@ 00102dac 0880
.org 0x102dae
	adds r0, r6, #0	@ 00102dae 301c
.org 0x102db0
	adds r0, #194	@ 00102db0 c230
.org 0x102db2
	strh r2, [r0, #0]	@ 00102db2 0280
.org 0x102db4
	ldrb r1, [r6, #10]	@ 00102db4 b17a
.org 0x102db6
	movs r0, #4	@ 00102db6 0420
.org 0x102db8
	orrs r0, r1	@ 00102db8 0843
.org 0x102dba
	strb r0, [r6, #10]	@ 00102dba b072
.org 0x102dbc
	adds r4, r6, #0	@ 00102dbc 341c
.org 0x102dbe
	adds r4, #116	@ 00102dbe 7434
.org 0x102dc0
	ldr r1, [pc, #80]	@ 00102dc0 1449
.org 0x102dc2
	adds r2, r6, #0	@ 00102dc2 321c
.org 0x102dc4
	adds r2, #84	@ 00102dc4 5432
.org 0x102dc6
	adds r0, r4, #0	@ 00102dc6 201c
.org 0x102dc8
	movs r3, #1	@ 00102dc8 0123
.org 0x102dca
	bl 0x5760	@ 00102dca 02f7c9fc
.org 0x102dce
	str r6, [r4, #44]	@ 00102dce e662
.org 0x102dd0
	str r5, [r4, #36]	@ 00102dd0 6562
.org 0x102dd2
	movs r0, #128	@ 00102dd2 8020
.org 0x102dd4
	lsls r0, r0, #1	@ 00102dd4 4000
.org 0x102dd6
	str r0, [r6, #92]	@ 00102dd6 f065
.org 0x102dd8
	adds r1, r6, #0	@ 00102dd8 311c
.org 0x102dda
	adds r1, #185	@ 00102dda b931
.org 0x102ddc
	movs r0, #1	@ 00102ddc 0120
.org 0x102dde
	strb r0, [r1, #0]	@ 00102dde 0870
.org 0x102de0
	subs r1, #1	@ 00102de0 0139
.org 0x102de2
	movs r0, #48	@ 00102de2 3020
.org 0x102de4
	strb r0, [r1, #0]	@ 00102de4 0870
.org 0x102de6
	ldrb r1, [r6, #10]	@ 00102de6 b17a
.org 0x102de8
	movs r0, #16	@ 00102de8 1020
.org 0x102dea
	ands r0, r1	@ 00102dea 0840
.org 0x102dec
	cmp r0, #0	@ 00102dec 0028
.org 0x102dee
	bne.n 0x102e00	@ 00102dee 07d1
.org 0x102df0
	ldr r0, [r6, #92]	@ 00102df0 f06d
.org 0x102df2
	lsls r0, r0, #8	@ 00102df2 0002
.org 0x102df4
	negs r0, r0	@ 00102df4 4042
.org 0x102df6
	cmp r0, #0	@ 00102df6 0028
.org 0x102df8
	bge.n 0x102dfc	@ 00102df8 00da
.org 0x102dfa
	adds r0, #255	@ 00102dfa ff30
.org 0x102dfc
	asrs r0, r0, #8	@ 00102dfc 0012
.org 0x102dfe
	str r0, [r6, #92]	@ 00102dfe f065
.org 0x102e00
	movs r1, #0	@ 00102e00 0021
.org 0x102e02
	movs r0, #1	@ 00102e02 0120
.org 0x102e04
	strb r0, [r6, #13]	@ 00102e04 7073
.org 0x102e06
	strb r1, [r6, #14]	@ 00102e06 b173
.org 0x102e08
	pop {r4, r5, r6}	@ 00102e08 70bc
.org 0x102e0a
	pop {r0}	@ 00102e0a 01bc
.org 0x102e0c
	bx r0	@ 00102e0c 0047
