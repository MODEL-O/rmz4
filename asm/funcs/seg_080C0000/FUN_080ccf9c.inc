@ FUN_080ccf9c  entry 0x080ccf9c  size 204
.thumb
.org 0xccf9c
FUN_080ccf9c:
	push {r4, r5, r6, r7, lr}	@ 000ccf9c f0b5
.org 0xccf9e
	mov r7, r8	@ 000ccf9e 4746
.org 0xccfa0
	push {r7}	@ 000ccfa0 80b4
.org 0xccfa2
	adds r6, r0, #0	@ 000ccfa2 061c
.org 0xccfa4
	bl 0x1cc9c	@ 000ccfa4 4ff77afe
.org 0xccfa8
	ldrb r1, [r6, #10]	@ 000ccfa8 b17a
.org 0xccfaa
	movs r0, #1	@ 000ccfaa 0120
.org 0xccfac
	movs r5, #0	@ 000ccfac 0025
.org 0xccfae
	orrs r0, r1	@ 000ccfae 0843
.org 0xccfb0
	movs r1, #2	@ 000ccfb0 0221
.org 0xccfb2
	orrs r0, r1	@ 000ccfb2 0843
.org 0xccfb4
	movs r1, #0	@ 000ccfb4 0021
.org 0xccfb6
	mov r8, r1	@ 000ccfb6 8846
.org 0xccfb8
	movs r1, #4	@ 000ccfb8 0421
.org 0xccfba
	orrs r0, r1	@ 000ccfba 0843
.org 0xccfbc
	strb r0, [r6, #10]	@ 000ccfbc b072
.org 0xccfbe
	adds r4, r6, #0	@ 000ccfbe 341c
.org 0xccfc0
	adds r4, #116	@ 000ccfc0 7434
.org 0xccfc2
	ldr r1, [pc, #96]	@ 000ccfc2 1849
.org 0xccfc4
	adds r7, r6, #0	@ 000ccfc4 371c
.org 0xccfc6
	adds r7, #84	@ 000ccfc6 5437
.org 0xccfc8
	adds r0, r4, #0	@ 000ccfc8 201c
.org 0xccfca
	adds r2, r7, #0	@ 000ccfca 3a1c
.org 0xccfcc
	movs r3, #255	@ 000ccfcc ff23
.org 0xccfce
	bl 0x5760	@ 000ccfce 38f7c7fb
.org 0xccfd2
	str r6, [r4, #44]	@ 000ccfd2 e662
.org 0xccfd4
	str r5, [r4, #36]	@ 000ccfd4 6562
.org 0xccfd6
	ldr r1, [pc, #80]	@ 000ccfd6 1449
.org 0xccfd8
	adds r0, r6, #0	@ 000ccfd8 301c
.org 0xccfda
	bl 0x1cf00	@ 000ccfda 4ff791ff
.org 0xccfde
	movs r1, #192	@ 000ccfde c021
.org 0xccfe0
	lsls r1, r1, #1	@ 000ccfe0 4900
.org 0xccfe2
	str r1, [r6, #92]	@ 000ccfe2 f165
.org 0xccfe4
	movs r0, #128	@ 000ccfe4 8020
.org 0xccfe6
	lsls r0, r0, #1	@ 000ccfe6 4000
.org 0xccfe8
	str r0, [r6, #96]	@ 000ccfe8 3066
.org 0xccfea
	ldrb r0, [r6, #16]	@ 000ccfea 307c
.org 0xccfec
	cmp r0, #0	@ 000ccfec 0028
.org 0xccfee
	bne.n 0xcd02c	@ 000ccfee 1dd1
.org 0xccff0
	adds r0, r7, #0	@ 000ccff0 381c
.org 0xccff2
	movs r1, #1	@ 000ccff2 0121
.org 0xccff4
	bl 0xccf4c	@ 000ccff4 fff7aaff
.org 0xccff8
	movs r2, #1	@ 000ccff8 0122
.org 0xccffa
	ldrb r0, [r6, #10]	@ 000ccffa b07a
.org 0xccffc
	movs r1, #16	@ 000ccffc 1021
.org 0xccffe
	orrs r0, r1	@ 000ccffe 0843
.org 0xcd000
	strb r0, [r6, #10]	@ 000cd000 b072
.org 0xcd002
	adds r0, r6, #0	@ 000cd002 301c
.org 0xcd004
	adds r0, #76	@ 000cd004 4c30
.org 0xcd006
	strb r2, [r0, #0]	@ 000cd006 0270
.org 0xcd008
	adds r3, r6, #0	@ 000cd008 331c
.org 0xcd00a
	adds r3, #74	@ 000cd00a 4a33
.org 0xcd00c
	movs r2, #16	@ 000cd00c 1022
.org 0xcd00e
	ldrb r1, [r3, #0]	@ 000cd00e 1978
.org 0xcd010
	movs r0, #17	@ 000cd010 1120
.org 0xcd012
	negs r0, r0	@ 000cd012 4042
.org 0xcd014
	ands r0, r1	@ 000cd014 0840
.org 0xcd016
	orrs r0, r2	@ 000cd016 1043
.org 0xcd018
	strb r0, [r3, #0]	@ 000cd018 1870
.org 0xcd01a
	ldr r0, [r6, #84]	@ 000cd01a 706d
.org 0xcd01c
	movs r1, #160	@ 000cd01c a021
.org 0xcd01e
	lsls r1, r1, #4	@ 000cd01e 0901
.org 0xcd020
	b.n 0xcd03a	@ 000cd020 0be0
.org 0xcd022
	.byte 0x00	@ 000cd022 data
.org 0xcd023
	.byte 0x00	@ 000cd023 data
.org 0xcd024
	.byte 0xd8,0x68,0x86,0x08	@ 000cd024 data
.org 0xcd028
	.byte 0x0b,0x9a,0x00,0x00	@ 000cd028 data
.org 0xcd02c
	lsls r0, r1, #8	@ 000cd02c 0802
.org 0xcd02e
	negs r0, r0	@ 000cd02e 4042
.org 0xcd030
	adds r0, #255	@ 000cd030 ff30
.org 0xcd032
	asrs r0, r0, #8	@ 000cd032 0012
.org 0xcd034
	str r0, [r6, #92]	@ 000cd034 f065
.org 0xcd036
	ldr r0, [r6, #84]	@ 000cd036 706d
.org 0xcd038
	ldr r1, [pc, #56]	@ 000cd038 0e49
.org 0xcd03a
	adds r0, r0, r1	@ 000cd03a 4018
.org 0xcd03c
	str r0, [r6, #84]	@ 000cd03c 7065
.org 0xcd03e
	ldr r0, [r6, #88]	@ 000cd03e b06d
.org 0xcd040
	ldr r1, [pc, #52]	@ 000cd040 0d49
.org 0xcd042
	adds r0, r0, r1	@ 000cd042 4018
.org 0xcd044
	str r0, [r6, #88]	@ 000cd044 b065
.org 0xcd046
	adds r1, r6, #0	@ 000cd046 311c
.org 0xcd048
	adds r1, #84	@ 000cd048 5431
.org 0xcd04a
	movs r0, #3	@ 000cd04a 0320
.org 0xcd04c
	bl 0xd0c88	@ 000cd04c 03f01cfe
.org 0xcd050
	ldr r1, [pc, #40]	@ 000cd050 0a49
.org 0xcd052
	ldrb r0, [r6, #9]	@ 000cd052 707a
.org 0xcd054
	lsls r0, r0, #2	@ 000cd054 8000
.org 0xcd056
	adds r0, r0, r1	@ 000cd056 4018
.org 0xcd058
	movs r1, #1	@ 000cd058 0121
.org 0xcd05a
	str r1, [r6, #12]	@ 000cd05a f160
.org 0xcd05c
	ldr r0, [r0, #0]	@ 000cd05c 0068
.org 0xcd05e
	ldr r0, [r0, #4]	@ 000cd05e 4068
.org 0xcd060
	str r0, [r6, #20]	@ 000cd060 7061
.org 0xcd062
	adds r0, r6, #0	@ 000cd062 301c
.org 0xcd064
	bl 0xcd080	@ 000cd064 00f00cf8
