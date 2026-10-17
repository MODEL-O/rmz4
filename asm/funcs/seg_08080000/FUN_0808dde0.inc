@ FUN_0808dde0  entry 0x0808dde0  size 230
.thumb
.org 0x8dde0
FUN_0808dde0:
	push {r4, r5, r6, r7, lr}	@ 0008dde0 f0b5
.org 0x8dde2
	mov r7, r8	@ 0008dde2 4746
.org 0x8dde4
	push {r7}	@ 0008dde4 80b4
.org 0x8dde6
	adds r7, r0, #0	@ 0008dde6 071c
.org 0x8dde8
	ldr r4, [r7, #40]	@ 0008dde8 bc6a
.org 0x8ddea
	ldrb r6, [r7, #17]	@ 0008ddea 7e7c
.org 0x8ddec
	ldrb r5, [r4, #13]	@ 0008ddec 657b
.org 0x8ddee
	ldr r1, [pc, #156]	@ 0008ddee 2749
.org 0x8ddf0
	ldrb r0, [r7, #9]	@ 0008ddf0 787a
.org 0x8ddf2
	lsls r0, r0, #2	@ 0008ddf2 8000
.org 0x8ddf4
	adds r0, r0, r1	@ 0008ddf4 4018
.org 0x8ddf6
	movs r1, #1	@ 0008ddf6 0121
.org 0x8ddf8
	str r1, [r7, #12]	@ 0008ddf8 f960
.org 0x8ddfa
	ldr r0, [r0, #0]	@ 0008ddfa 0068
.org 0x8ddfc
	ldr r0, [r0, #4]	@ 0008ddfc 4068
.org 0x8ddfe
	str r0, [r7, #20]	@ 0008ddfe 7861
.org 0x8de00
	movs r0, #0	@ 0008de00 0020
.org 0x8de02
	strb r5, [r7, #13]	@ 0008de02 7d73
.org 0x8de04
	strb r0, [r7, #14]	@ 0008de04 b873
.org 0x8de06
	strb r0, [r7, #15]	@ 0008de06 f873
.org 0x8de08
	ldrb r0, [r7, #10]	@ 0008de08 b87a
.org 0x8de0a
	movs r2, #0	@ 0008de0a 0022
.org 0x8de0c
	mov r8, r2	@ 0008de0c 9046
.org 0x8de0e
	orrs r0, r1	@ 0008de0e 0843
.org 0x8de10
	movs r1, #2	@ 0008de10 0221
.org 0x8de12
	orrs r0, r1	@ 0008de12 0843
.org 0x8de14
	strb r0, [r7, #10]	@ 0008de14 b872
.org 0x8de16
	lsls r3, r6, #1	@ 0008de16 7300
.org 0x8de18
	subs r3, #1	@ 0008de18 013b
.org 0x8de1a
	lsls r1, r3, #1	@ 0008de1a 5900
.org 0x8de1c
	adds r1, r1, r3	@ 0008de1c c918
.org 0x8de1e
	lsls r1, r1, #11	@ 0008de1e c902
.org 0x8de20
	ldr r0, [r4, #84]	@ 0008de20 606d
.org 0x8de22
	adds r0, r0, r1	@ 0008de22 4018
.org 0x8de24
	str r0, [r7, #84]	@ 0008de24 7865
.org 0x8de26
	ldr r0, [r4, #88]	@ 0008de26 a06d
.org 0x8de28
	movs r1, #172	@ 0008de28 ac21
.org 0x8de2a
	lsls r1, r1, #6	@ 0008de2a 8901
.org 0x8de2c
	adds r0, r0, r1	@ 0008de2c 4018
.org 0x8de2e
	str r0, [r7, #88]	@ 0008de2e b865
.org 0x8de30
	ldr r1, [pc, #92]	@ 0008de30 1749
.org 0x8de32
	lsls r2, r5, #3	@ 0008de32 ea00
.org 0x8de34
	adds r0, r2, r1	@ 0008de34 5018
.org 0x8de36
	ldr r0, [r0, #0]	@ 0008de36 0068
.org 0x8de38
	muls r0, r3	@ 0008de38 5843
.org 0x8de3a
	str r0, [r7, #100]	@ 0008de3a 7866
.org 0x8de3c
	adds r1, #4	@ 0008de3c 0431
.org 0x8de3e
	adds r2, r2, r1	@ 0008de3e 5218
.org 0x8de40
	ldr r0, [r2, #0]	@ 0008de40 1068
.org 0x8de42
	str r0, [r7, #104]	@ 0008de42 b866
.org 0x8de44
	adds r1, r7, #0	@ 0008de44 391c
.org 0x8de46
	adds r1, #180	@ 0008de46 b431
.org 0x8de48
	adds r4, #180	@ 0008de48 b434
.org 0x8de4a
	ldr r0, [r4, #0]	@ 0008de4a 2068
.org 0x8de4c
	str r0, [r1, #0]	@ 0008de4c 0860
.org 0x8de4e
	ldr r1, [pc, #68]	@ 0008de4e 1149
.org 0x8de50
	lsls r0, r5, #1	@ 0008de50 6800
.org 0x8de52
	adds r0, r0, r1	@ 0008de52 4018
.org 0x8de54
	ldrh r1, [r0, #0]	@ 0008de54 0188
.org 0x8de56
	adds r0, r7, #0	@ 0008de56 381c
.org 0x8de58
	adds r0, #184	@ 0008de58 b830
.org 0x8de5a
	strh r1, [r0, #0]	@ 0008de5a 0180
.org 0x8de5c
	ldr r0, [pc, #56]	@ 0008de5c 0e48
.org 0x8de5e
	adds r5, r5, r0	@ 0008de5e 2d18
.org 0x8de60
	ldrb r0, [r5, #0]	@ 0008de60 2878
.org 0x8de62
	strb r0, [r7, #18]	@ 0008de62 b874
.org 0x8de64
	adds r0, r7, #0	@ 0008de64 381c
.org 0x8de66
	bl 0x1cc9c	@ 0008de66 8ef719ff
.org 0x8de6a
	adds r2, r7, #0	@ 0008de6a 3a1c
.org 0x8de6c
	adds r2, #73	@ 0008de6c 4932
.org 0x8de6e
	ldrb r0, [r2, #0]	@ 0008de6e 1078
.org 0x8de70
	movs r1, #12	@ 0008de70 0c21
.org 0x8de72
	orrs r0, r1	@ 0008de72 0843
.org 0x8de74
	strb r0, [r2, #0]	@ 0008de74 1070
.org 0x8de76
	adds r1, r7, #0	@ 0008de76 391c
.org 0x8de78
	adds r1, #37	@ 0008de78 2531
.org 0x8de7a
	movs r0, #24	@ 0008de7a 1820
.org 0x8de7c
	strb r0, [r1, #0]	@ 0008de7c 0870
.org 0x8de7e
	cmp r6, #0	@ 0008de7e 002e
.org 0x8de80
	beq.n 0x8de9c	@ 0008de80 0cd0
.org 0x8de82
	ldrb r0, [r7, #10]	@ 0008de82 b87a
.org 0x8de84
	movs r1, #16	@ 0008de84 1021
.org 0x8de86
	orrs r0, r1	@ 0008de86 0843
.org 0x8de88
	b.n 0x8dea2	@ 0008de88 0be0
.org 0x8de8a
	.byte 0x00	@ 0008de8a data
.org 0x8de8b
	.byte 0x00	@ 0008de8b data
.org 0x8de8c
	.byte 0x40,0xdb,0x85,0x08	@ 0008de8c data
.org 0x8de90
	.byte 0x0c,0xfb,0x85,0x08	@ 0008de90 data
.org 0x8de94
	.byte 0x54,0xfb,0x85,0x08	@ 0008de94 data
.org 0x8de98
	.byte 0x66,0xfb,0x85,0x08	@ 0008de98 data
.org 0x8de9c
	ldrb r1, [r7, #10]	@ 0008de9c b97a
.org 0x8de9e
	movs r0, #239	@ 0008de9e ef20
.org 0x8dea0
	ands r0, r1	@ 0008dea0 0840
.org 0x8dea2
	strb r0, [r7, #10]	@ 0008dea2 b872
.org 0x8dea4
	movs r1, #1	@ 0008dea4 0121
.org 0x8dea6
	ands r1, r6	@ 0008dea6 3140
.org 0x8dea8
	adds r0, r7, #0	@ 0008dea8 381c
.org 0x8deaa
	adds r0, #76	@ 0008deaa 4c30
.org 0x8deac
	strb r1, [r0, #0]	@ 0008deac 0170
.org 0x8deae
	adds r3, r7, #0	@ 0008deae 3b1c
.org 0x8deb0
	adds r3, #74	@ 0008deb0 4a33
.org 0x8deb2
	lsls r1, r1, #4	@ 0008deb2 0901
.org 0x8deb4
	ldrb r2, [r3, #0]	@ 0008deb4 1a78
.org 0x8deb6
	movs r0, #17	@ 0008deb6 1120
.org 0x8deb8
	negs r0, r0	@ 0008deb8 4042
.org 0x8deba
	ands r0, r2	@ 0008deba 1040
.org 0x8debc
	orrs r0, r1	@ 0008debc 0843
.org 0x8debe
	strb r0, [r3, #0]	@ 0008debe 1870
.org 0x8dec0
	ldr r1, [pc, #20]	@ 0008dec0 0549
.org 0x8dec2
	adds r0, r7, #0	@ 0008dec2 381c
.org 0x8dec4
	bl 0x1cf00	@ 0008dec4 8ff71cf8
