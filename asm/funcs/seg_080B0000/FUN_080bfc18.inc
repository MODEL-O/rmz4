@ FUN_080bfc18  entry 0x080bfc18  size 38
.thumb
.org 0xbfc18
FUN_080bfc18:
	push {lr}	@ 000bfc18 00b5
.org 0xbfc1a
	adds r2, r0, #0	@ 000bfc1a 021c
.org 0xbfc1c
	adds r1, r2, #0	@ 000bfc1c 111c
.org 0xbfc1e
	adds r1, #188	@ 000bfc1e bc31
.org 0xbfc20
	ldr r0, [r1, #0]	@ 000bfc20 0868
.org 0xbfc22
	cmp r0, #0	@ 000bfc22 0028
.org 0xbfc24
	beq.n 0xbfc2a	@ 000bfc24 01d0
.org 0xbfc26
	subs r0, #1	@ 000bfc26 0138
.org 0xbfc28
	str r0, [r1, #0]	@ 000bfc28 0860
.org 0xbfc2a
	ldr r0, [pc, #20]	@ 000bfc2a 0548
.org 0xbfc2c
	ldrb r1, [r2, #13]	@ 000bfc2c 517b
.org 0xbfc2e
	lsls r1, r1, #2	@ 000bfc2e 8900
.org 0xbfc30
	adds r1, r1, r0	@ 000bfc30 0918
.org 0xbfc32
	ldr r1, [r1, #0]	@ 000bfc32 0968
.org 0xbfc34
	adds r0, r2, #0	@ 000bfc34 101c
.org 0xbfc36
	bl 0x128f80	@ 000bfc36 69f0a3f9
.org 0xbfc3a
	pop {r0}	@ 000bfc3a 01bc
.org 0xbfc3c
	bx r0	@ 000bfc3c 0047
