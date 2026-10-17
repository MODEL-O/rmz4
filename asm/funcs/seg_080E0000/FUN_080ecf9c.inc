@ FUN_080ecf9c  entry 0x080ecf9c  size 78
.thumb
.org 0xecf9c
FUN_080ecf9c:
	push {r4, r5, lr}	@ 000ecf9c 30b5
.org 0xecf9e
	adds r4, r0, #0	@ 000ecf9e 041c
.org 0xecfa0
	bl 0x1cc9c	@ 000ecfa0 2ff77cfe
.org 0xecfa4
	ldrb r1, [r4, #10]	@ 000ecfa4 a17a
.org 0xecfa6
	movs r0, #1	@ 000ecfa6 0120
.org 0xecfa8
	orrs r0, r1	@ 000ecfa8 0843
.org 0xecfaa
	movs r1, #2	@ 000ecfaa 0221
.org 0xecfac
	orrs r0, r1	@ 000ecfac 0843
.org 0xecfae
	strb r0, [r4, #10]	@ 000ecfae a072
.org 0xecfb0
	ldrb r1, [r4, #11]	@ 000ecfb0 e17a
.org 0xecfb2
	movs r0, #8	@ 000ecfb2 0820
.org 0xecfb4
	orrs r0, r1	@ 000ecfb4 0843
.org 0xecfb6
	strb r0, [r4, #11]	@ 000ecfb6 e072
.org 0xecfb8
	ldr r0, [pc, #48]	@ 000ecfb8 0c48
.org 0xecfba
	str r0, [r4, #48]	@ 000ecfba 2063
.org 0xecfbc
	movs r5, #1	@ 000ecfbc 0125
.org 0xecfbe
	strh r5, [r4, #38]	@ 000ecfbe e584
.org 0xecfc0
	ldr r1, [pc, #44]	@ 000ecfc0 0b49
.org 0xecfc2
	adds r0, r4, #0	@ 000ecfc2 201c
.org 0xecfc4
	bl 0x1cf00	@ 000ecfc4 2ff79cff
.org 0xecfc8
	ldr r0, [r4, #88]	@ 000ecfc8 a06d
.org 0xecfca
	adds r0, #1	@ 000ecfca 0130
.org 0xecfcc
	str r0, [r4, #88]	@ 000ecfcc a065
.org 0xecfce
	ldr r1, [pc, #36]	@ 000ecfce 0949
.org 0xecfd0
	ldrb r0, [r4, #9]	@ 000ecfd0 607a
.org 0xecfd2
	lsls r0, r0, #2	@ 000ecfd2 8000
.org 0xecfd4
	adds r0, r0, r1	@ 000ecfd4 4018
.org 0xecfd6
	str r5, [r4, #12]	@ 000ecfd6 e560
.org 0xecfd8
	ldr r0, [r0, #0]	@ 000ecfd8 0068
.org 0xecfda
	ldr r0, [r0, #4]	@ 000ecfda 4068
.org 0xecfdc
	str r0, [r4, #20]	@ 000ecfdc 6061
.org 0xecfde
	adds r0, r4, #0	@ 000ecfde 201c
.org 0xecfe0
	bl 0xecefc	@ 000ecfe0 fff78cff
.org 0xecfe4
	pop {r4, r5}	@ 000ecfe4 30bc
.org 0xecfe6
	pop {r0}	@ 000ecfe6 01bc
.org 0xecfe8
	bx r0	@ 000ecfe8 0047
