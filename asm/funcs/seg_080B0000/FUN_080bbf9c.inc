@ FUN_080bbf9c  entry 0x080bbf9c  size 96
.thumb
.org 0xbbf9c
FUN_080bbf9c:
	push {r4, r5, lr}	@ 000bbf9c 30b5
.org 0xbbf9e
	sub sp, #8	@ 000bbf9e 82b0
.org 0xbbfa0
	adds r4, r0, #0	@ 000bbfa0 041c
.org 0xbbfa2
	ldr r0, [pc, #88]	@ 000bbfa2 1648
.org 0xbbfa4
	ldr r1, [r0, #4]	@ 000bbfa4 4168
.org 0xbbfa6
	ldr r0, [r0, #0]	@ 000bbfa6 0068
.org 0xbbfa8
	str r0, [sp, #0]	@ 000bbfa8 0090
.org 0xbbfaa
	str r1, [sp, #4]	@ 000bbfaa 0191
.org 0xbbfac
	ldrb r5, [r4, #16]	@ 000bbfac 257c
.org 0xbbfae
	ldrb r0, [r4, #15]	@ 000bbfae e07b
.org 0xbbfb0
	cmp r0, #0	@ 000bbfb0 0028
.org 0xbbfb2
	bne.n 0xbbfd4	@ 000bbfb2 0fd1
.org 0xbbfb4
	adds r0, r4, #0	@ 000bbfb4 201c
.org 0xbbfb6
	adds r0, #116	@ 000bbfb6 7430
.org 0xbbfb8
	ldr r1, [pc, #68]	@ 000bbfb8 1149
.org 0xbbfba
	bl 0x5784	@ 000bbfba 49f7e3fb
.org 0xbbfbe
	lsls r0, r5, #2	@ 000bbfbe a800
.org 0xbbfc0
	add r0, sp	@ 000bbfc0 6844
.org 0xbbfc2
	ldrh r1, [r0, #0]	@ 000bbfc2 0188
.org 0xbbfc4
	adds r0, r4, #0	@ 000bbfc4 201c
.org 0xbbfc6
	bl 0x1cf00	@ 000bbfc6 60f79bff
.org 0xbbfca
	movs r0, #16	@ 000bbfca 1020
.org 0xbbfcc
	strb r0, [r4, #18]	@ 000bbfcc a074
.org 0xbbfce
	ldrb r0, [r4, #15]	@ 000bbfce e07b
.org 0xbbfd0
	adds r0, #1	@ 000bbfd0 0130
.org 0xbbfd2
	strb r0, [r4, #15]	@ 000bbfd2 e073
.org 0xbbfd4
	adds r0, r4, #0	@ 000bbfd4 201c
.org 0xbbfd6
	bl 0x1cff0	@ 000bbfd6 61f70bf8
.org 0xbbfda
	ldrb r0, [r4, #18]	@ 000bbfda a07c
.org 0xbbfdc
	cmp r0, #0	@ 000bbfdc 0028
.org 0xbbfde
	beq.n 0xbbfea	@ 000bbfde 04d0
.org 0xbbfe0
	subs r0, #1	@ 000bbfe0 0138
.org 0xbbfe2
	strb r0, [r4, #18]	@ 000bbfe2 a074
.org 0xbbfe4
	lsls r0, r0, #24	@ 000bbfe4 0006
.org 0xbbfe6
	cmp r0, #0	@ 000bbfe6 0028
.org 0xbbfe8
	bne.n 0xbbff4	@ 000bbfe8 04d1
.org 0xbbfea
	movs r1, #0	@ 000bbfea 0021
.org 0xbbfec
	movs r0, #2	@ 000bbfec 0220
.org 0xbbfee
	strb r0, [r4, #13]	@ 000bbfee 6073
.org 0xbbff0
	strb r1, [r4, #14]	@ 000bbff0 a173
.org 0xbbff2
	strb r1, [r4, #15]	@ 000bbff2 e173
.org 0xbbff4
	add sp, #8	@ 000bbff4 02b0
.org 0xbbff6
	pop {r4, r5}	@ 000bbff6 30bc
.org 0xbbff8
	pop {r0}	@ 000bbff8 01bc
.org 0xbbffa
	bx r0	@ 000bbffa 0047
