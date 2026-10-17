@ FUN_080becd4  entry 0x080becd4  size 34
.thumb
.org 0xbecd4
FUN_080becd4:
	push {lr}	@ 000becd4 00b5
.org 0xbecd6
	ldr r1, [r0, #12]	@ 000becd6 c168
.org 0xbecd8
	ldr r2, [r1, #44]	@ 000becd8 ca6a
.org 0xbecda
	ldr r0, [r0, #20]	@ 000becda 4069
.org 0xbecdc
	movs r1, #1	@ 000becdc 0121
.org 0xbecde
	ands r0, r1	@ 000becde 0840
.org 0xbece0
	cmp r0, #0	@ 000bece0 0028
.org 0xbece2
	beq.n 0xbecf2	@ 000bece2 06d0
.org 0xbece4
	ldrh r1, [r2, #8]	@ 000bece4 1189
.org 0xbece6
	ldr r0, [pc, #16]	@ 000bece6 0448
.org 0xbece8
	cmp r1, r0	@ 000bece8 8142
.org 0xbecea
	bne.n 0xbecf2	@ 000becea 02d1
.org 0xbecec
	adds r0, r2, #0	@ 000becec 101c
.org 0xbecee
	bl 0xc1a14	@ 000becee 02f091fe
.org 0xbecf2
	pop {r0}	@ 000becf2 01bc
.org 0xbecf4
	bx r0	@ 000becf4 0047
