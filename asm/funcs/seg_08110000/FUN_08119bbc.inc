@ FUN_08119bbc  entry 0x08119bbc  size 336
.thumb
.org 0x119bbc
FUN_08119bbc:
	push {r4, r5, r6, lr}	@ 00119bbc 70b5
.org 0x119bbe
	sub sp, #4	@ 00119bbe 81b0
.org 0x119bc0
	adds r5, r0, #0	@ 00119bc0 051c
.org 0x119bc2
	movs r1, #221	@ 00119bc2 dd21
.org 0x119bc4
	lsls r1, r1, #4	@ 00119bc4 0901
.org 0x119bc6
	adds r0, r5, r1	@ 00119bc6 6818
.org 0x119bc8
	movs r4, #0	@ 00119bc8 0024
.org 0x119bca
	strb r4, [r0, #0]	@ 00119bca 0470
.org 0x119bcc
	strb r4, [r0, #1]	@ 00119bcc 4470
.org 0x119bce
	strb r4, [r0, #2]	@ 00119bce 8470
.org 0x119bd0
	ldr r2, [pc, #312]	@ 00119bd0 4e4a
.org 0x119bd2
	adds r0, r5, r2	@ 00119bd2 a818
.org 0x119bd4
	movs r6, #0	@ 00119bd4 0026
.org 0x119bd6
	strh r4, [r0, #48]	@ 00119bd6 0486
.org 0x119bd8
	strh r4, [r0, #50]	@ 00119bd8 4486
.org 0x119bda
	strh r4, [r0, #52]	@ 00119bda 8486
.org 0x119bdc
	strh r4, [r0, #54]	@ 00119bdc c486
.org 0x119bde
	ldr r3, [pc, #304]	@ 00119bde 4c4b
.org 0x119be0
	adds r0, r5, r3	@ 00119be0 e818
.org 0x119be2
	strb r6, [r0, #0]	@ 00119be2 0670
.org 0x119be4
	ldr r0, [pc, #300]	@ 00119be4 4b48
.org 0x119be6
	ldr r6, [pc, #304]	@ 00119be6 4c4e
.org 0x119be8
	ldrh r2, [r6, #0]	@ 00119be8 3288
.org 0x119bea
	movs r1, #12	@ 00119bea 0c21
.org 0x119bec
	ands r1, r2	@ 00119bec 1140
.org 0x119bee
	lsls r1, r1, #12	@ 00119bee 0903
.org 0x119bf0
	bl 0x1d30	@ 00119bf0 e8f69ef8
.org 0x119bf4
	ldr r0, [pc, #292]	@ 00119bf4 4948
.org 0x119bf6
	movs r1, #0	@ 00119bf6 0021
.org 0x119bf8
	bl 0x2208	@ 00119bf8 e8f606fb
.org 0x119bfc
	ldr r1, [pc, #288]	@ 00119bfc 4849
.org 0x119bfe
	adds r0, r5, r1	@ 00119bfe 6818
.org 0x119c00
	ldr r1, [pc, #288]	@ 00119c00 4849
.org 0x119c02
	str r4, [sp, #0]	@ 00119c02 0094
.org 0x119c04
	movs r2, #21	@ 00119c04 1522
.org 0x119c06
	movs r3, #0	@ 00119c06 0023
.org 0x119c08
	bl 0x27b8	@ 00119c08 e8f6d6fd
.org 0x119c0c
	ldr r0, [pc, #280]	@ 00119c0c 4648
.org 0x119c0e
	ldr r1, [pc, #284]	@ 00119c0e 4749
.org 0x119c10
	adds r1, #130	@ 00119c10 8231
.org 0x119c12
	ldrh r1, [r1, #0]	@ 00119c12 0988
.org 0x119c14
	ldrh r2, [r0, #6]	@ 00119c14 c288
.org 0x119c16
	lsrs r2, r2, #6	@ 00119c16 9209
.org 0x119c18
	subs r1, r1, r2	@ 00119c18 891a
.org 0x119c1a
	lsls r1, r1, #5	@ 00119c1a 4901
.org 0x119c1c
	movs r2, #128	@ 00119c1c 8022
.org 0x119c1e
	lsls r2, r2, #9	@ 00119c1e 5202
.org 0x119c20
	adds r1, r1, r2	@ 00119c20 8918
.org 0x119c22
	bl 0x1d30	@ 00119c22 e8f685f8
.org 0x119c26
	ldr r0, [pc, #264]	@ 00119c26 4248
.org 0x119c28
	ldr r1, [pc, #264]	@ 00119c28 4249
.org 0x119c2a
	adds r1, #130	@ 00119c2a 8231
.org 0x119c2c
	ldrh r1, [r1, #0]	@ 00119c2c 0988
.org 0x119c2e
	ldrb r2, [r0, #7]	@ 00119c2e c279
.org 0x119c30
	subs r1, r1, r2	@ 00119c30 891a
.org 0x119c32
	lsls r1, r1, #5	@ 00119c32 4901
.org 0x119c34
	movs r3, #128	@ 00119c34 8023
.org 0x119c36
	lsls r3, r3, #2	@ 00119c36 9b00
.org 0x119c38
	adds r1, r1, r3	@ 00119c38 c918
.org 0x119c3a
	bl 0x2208	@ 00119c3a e8f6e5fa
.org 0x119c3e
	adds r0, r5, #0	@ 00119c3e 281c
.org 0x119c40
	movs r1, #0	@ 00119c40 0021
.org 0x119c42
	movs r2, #0	@ 00119c42 0022
.org 0x119c44
	bl 0x10b0e0	@ 00119c44 f1f74cfa
.org 0x119c48
	adds r0, r5, #0	@ 00119c48 281c
.org 0x119c4a
	movs r1, #0	@ 00119c4a 0021
.org 0x119c4c
	movs r2, #1	@ 00119c4c 0122
.org 0x119c4e
	bl 0x10b0e0	@ 00119c4e f1f747fa
.org 0x119c52
	adds r0, r5, #0	@ 00119c52 281c
.org 0x119c54
	movs r1, #0	@ 00119c54 0021
.org 0x119c56
	movs r2, #2	@ 00119c56 0222
.org 0x119c58
	bl 0x10b0e0	@ 00119c58 f1f742fa
.org 0x119c5c
	adds r0, r5, #0	@ 00119c5c 281c
.org 0x119c5e
	movs r1, #0	@ 00119c5e 0021
.org 0x119c60
	movs r2, #3	@ 00119c60 0322
.org 0x119c62
	bl 0x10b0e0	@ 00119c62 f1f73dfa
.org 0x119c66
	adds r0, r5, #0	@ 00119c66 281c
.org 0x119c68
	movs r1, #1	@ 00119c68 0121
.org 0x119c6a
	movs r2, #0	@ 00119c6a 0022
.org 0x119c6c
	bl 0x10b0e0	@ 00119c6c f1f738fa
.org 0x119c70
	adds r0, r5, #0	@ 00119c70 281c
.org 0x119c72
	movs r1, #2	@ 00119c72 0221
.org 0x119c74
	movs r2, #0	@ 00119c74 0022
.org 0x119c76
	bl 0x10b0e0	@ 00119c76 f1f733fa
.org 0x119c7a
	adds r0, r5, #0	@ 00119c7a 281c
.org 0x119c7c
	movs r1, #2	@ 00119c7c 0221
.org 0x119c7e
	movs r2, #1	@ 00119c7e 0122
.org 0x119c80
	bl 0x10b0e0	@ 00119c80 f1f72efa
.org 0x119c84
	adds r0, r5, #0	@ 00119c84 281c
.org 0x119c86
	movs r1, #3	@ 00119c86 0321
.org 0x119c88
	movs r2, #0	@ 00119c88 0022
.org 0x119c8a
	bl 0x10b0e0	@ 00119c8a f1f729fa
.org 0x119c8e
	adds r0, r5, #0	@ 00119c8e 281c
.org 0x119c90
	movs r1, #4	@ 00119c90 0421
.org 0x119c92
	movs r2, #0	@ 00119c92 0022
.org 0x119c94
	bl 0x10b0e0	@ 00119c94 f1f724fa
.org 0x119c98
	adds r0, r5, #0	@ 00119c98 281c
.org 0x119c9a
	movs r1, #4	@ 00119c9a 0421
.org 0x119c9c
	movs r2, #1	@ 00119c9c 0122
.org 0x119c9e
	bl 0x10b0e0	@ 00119c9e f1f71ffa
.org 0x119ca2
	adds r0, r5, #0	@ 00119ca2 281c
.org 0x119ca4
	movs r1, #4	@ 00119ca4 0421
.org 0x119ca6
	movs r2, #2	@ 00119ca6 0222
.org 0x119ca8
	bl 0x10b0e0	@ 00119ca8 f1f71afa
.org 0x119cac
	adds r0, r5, #0	@ 00119cac 281c
.org 0x119cae
	movs r1, #4	@ 00119cae 0421
.org 0x119cb0
	movs r2, #3	@ 00119cb0 0322
.org 0x119cb2
	bl 0x10b0e0	@ 00119cb2 f1f715fa
.org 0x119cb6
	adds r0, r5, #0	@ 00119cb6 281c
.org 0x119cb8
	movs r1, #4	@ 00119cb8 0421
.org 0x119cba
	movs r2, #4	@ 00119cba 0422
.org 0x119cbc
	bl 0x10b0e0	@ 00119cbc f1f710fa
.org 0x119cc0
	adds r0, r5, #0	@ 00119cc0 281c
.org 0x119cc2
	movs r1, #4	@ 00119cc2 0421
.org 0x119cc4
	movs r2, #5	@ 00119cc4 0522
.org 0x119cc6
	bl 0x10b0e0	@ 00119cc6 f1f70bfa
.org 0x119cca
	movs r1, #192	@ 00119cca c021
.org 0x119ccc
	lsls r1, r1, #2	@ 00119ccc 8900
.org 0x119cce
	movs r0, #67	@ 00119cce 4320
.org 0x119cd0
	bl 0x249c	@ 00119cd0 e8f6e4fb
.org 0x119cd4
	ldr r2, [pc, #96]	@ 00119cd4 184a
.org 0x119cd6
	ldrh r0, [r2, #0]	@ 00119cd6 1088
.org 0x119cd8
	movs r3, #128	@ 00119cd8 8023
.org 0x119cda
	lsls r3, r3, #6	@ 00119cda 9b01
.org 0x119cdc
	adds r1, r3, #0	@ 00119cdc 191c
.org 0x119cde
	orrs r0, r1	@ 00119cde 0843
.org 0x119ce0
	strh r0, [r2, #0]	@ 00119ce0 1080
.org 0x119ce2
	movs r0, #254	@ 00119ce2 fe20
.org 0x119ce4
	strb r0, [r2, #12]	@ 00119ce4 1073
.org 0x119ce6
	movs r0, #255	@ 00119ce6 ff20
.org 0x119ce8
	strb r0, [r2, #14]	@ 00119ce8 9073
.org 0x119cea
	ldr r1, [pc, #80]	@ 00119cea 1449
.org 0x119cec
	adds r0, r5, r1	@ 00119cec 6818
.org 0x119cee
	ldrh r2, [r6, #0]	@ 00119cee 3288
.org 0x119cf0
	movs r1, #248	@ 00119cf0 f821
.org 0x119cf2
	lsls r1, r1, #5	@ 00119cf2 4901
.org 0x119cf4
	ands r1, r2	@ 00119cf4 1140
.org 0x119cf6
	lsls r1, r1, #3	@ 00119cf6 c900
.org 0x119cf8
	movs r2, #128	@ 00119cf8 8022
.org 0x119cfa
	lsls r2, r2, #5	@ 00119cfa 5201
.org 0x119cfc
	bl 0x1f1c	@ 00119cfc e8f60ef9
.org 0x119d00
	movs r0, #2	@ 00119d00 0220
.org 0x119d02
	strb r0, [r5, #2]	@ 00119d02 a870
.org 0x119d04
	add sp, #4	@ 00119d04 01b0
.org 0x119d06
	pop {r4, r5, r6}	@ 00119d06 70bc
.org 0x119d08
	pop {r0}	@ 00119d08 01bc
.org 0x119d0a
	bx r0	@ 00119d0a 0047
