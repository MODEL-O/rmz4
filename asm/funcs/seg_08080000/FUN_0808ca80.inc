@ FUN_0808ca80  entry 0x0808ca80  size 80
.thumb
.org 0x8ca80
FUN_0808ca80:
	push {r4, lr}	@ 0008ca80 10b5
.org 0x8ca82
	sub sp, #8	@ 0008ca82 82b0
.org 0x8ca84
	adds r4, r0, #0	@ 0008ca84 041c
.org 0x8ca86
	movs r0, #42	@ 0008ca86 2a20
.org 0x8ca88
	bl 0x2b10	@ 0008ca88 76f742f8
.org 0x8ca8c
	ldrb r1, [r4, #10]	@ 0008ca8c a17a
.org 0x8ca8e
	movs r0, #254	@ 0008ca8e fe20
.org 0x8ca90
	ands r0, r1	@ 0008ca90 0840
.org 0x8ca92
	strb r0, [r4, #10]	@ 0008ca92 a072
.org 0x8ca94
	ldr r0, [r4, #84]	@ 0008ca94 606d
.org 0x8ca96
	str r0, [sp, #0]	@ 0008ca96 0090
.org 0x8ca98
	ldr r0, [r4, #88]	@ 0008ca98 a06d
.org 0x8ca9a
	str r0, [sp, #4]	@ 0008ca9a 0190
.org 0x8ca9c
	movs r0, #1	@ 0008ca9c 0120
.org 0x8ca9e
	mov r1, sp	@ 0008ca9e 6946
.org 0x8caa0
	bl 0xd0c88	@ 0008caa0 44f0f2f8
.org 0x8caa4
	adds r0, r4, #0	@ 0008caa4 201c
.org 0x8caa6
	bl 0x8cd8c	@ 0008caa6 00f071f9
.org 0x8caaa
	adds r2, r4, #0	@ 0008caaa 221c
.org 0x8caac
	adds r2, #84	@ 0008caac 5432
.org 0x8caae
	movs r0, #3	@ 0008caae 0320
.org 0x8cab0
	movs r1, #0	@ 0008cab0 0021
.org 0x8cab2
	bl 0x2ab88	@ 0008cab2 9ef769f8
.org 0x8cab6
	ldr r1, [pc, #24]	@ 0008cab6 0649
.org 0x8cab8
	ldrb r0, [r4, #9]	@ 0008cab8 607a
.org 0x8caba
	lsls r0, r0, #2	@ 0008caba 8000
.org 0x8cabc
	adds r0, r0, r1	@ 0008cabc 4018
.org 0x8cabe
	movs r1, #4	@ 0008cabe 0421
.org 0x8cac0
	str r1, [r4, #12]	@ 0008cac0 e160
.org 0x8cac2
	ldr r0, [r0, #0]	@ 0008cac2 0068
.org 0x8cac4
	ldr r0, [r0, #16]	@ 0008cac4 0069
.org 0x8cac6
	str r0, [r4, #20]	@ 0008cac6 6061
.org 0x8cac8
	add sp, #8	@ 0008cac8 02b0
.org 0x8caca
	pop {r4}	@ 0008caca 10bc
.org 0x8cacc
	pop {r0}	@ 0008cacc 01bc
.org 0x8cace
	bx r0	@ 0008cace 0047
