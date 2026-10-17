@ FUN_080d059c  entry 0x080d059c  size 36
.thumb
.org 0xd059c
FUN_080d059c:
	push {r4, lr}	@ 000d059c 10b5
.org 0xd059e
	adds r3, r0, #0	@ 000d059e 031c
.org 0xd05a0
	ldr r0, [r3, #40]	@ 000d05a0 986a
.org 0xd05a2
	adds r1, r0, #0	@ 000d05a2 011c
.org 0xd05a4
	adds r1, #204	@ 000d05a4 cc31
.org 0xd05a6
	ldrh r2, [r1, #0]	@ 000d05a6 0a88
.org 0xd05a8
	movs r4, #0	@ 000d05a8 0024
.org 0xd05aa
	ldrsh r0, [r1, r4]	@ 000d05aa 085f
.org 0xd05ac
	cmp r0, #0	@ 000d05ac 0028
.org 0xd05ae
	beq.n 0xd05b4	@ 000d05ae 01d0
.org 0xd05b0
	subs r0, r2, #1	@ 000d05b0 501e
.org 0xd05b2
	strh r0, [r1, #0]	@ 000d05b2 0880
.org 0xd05b4
	adds r0, r3, #0	@ 000d05b4 181c
.org 0xd05b6
	bl 0xbd3f8	@ 000d05b6 ecf71fff
.org 0xd05ba
	pop {r4}	@ 000d05ba 10bc
.org 0xd05bc
	pop {r0}	@ 000d05bc 01bc
.org 0xd05be
	bx r0	@ 000d05be 0047
