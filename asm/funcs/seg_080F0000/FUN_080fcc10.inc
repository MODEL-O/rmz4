@ FUN_080fcc10  entry 0x080fcc10  size 64
.thumb
.org 0xfcc10
FUN_080fcc10:
	push {r4, lr}	@ 000fcc10 10b5
.org 0xfcc12
	adds r1, r0, #0	@ 000fcc12 011c
.org 0xfcc14
	ldr r2, [r1, #20]	@ 000fcc14 4a69
.org 0xfcc16
	movs r0, #1	@ 000fcc16 0120
.org 0xfcc18
	ands r0, r2	@ 000fcc18 1040
.org 0xfcc1a
	cmp r0, #0	@ 000fcc1a 0028
.org 0xfcc1c
	beq.n 0xfcc4a	@ 000fcc1c 15d0
.org 0xfcc1e
	ldr r4, [r1, #44]	@ 000fcc1e cc6a
.org 0xfcc20
	movs r0, #128	@ 000fcc20 8020
.org 0xfcc22
	lsls r0, r0, #2	@ 000fcc22 8000
.org 0xfcc24
	ands r0, r2	@ 000fcc24 1040
.org 0xfcc26
	cmp r0, #0	@ 000fcc26 0028
.org 0xfcc28
	beq.n 0xfcc4a	@ 000fcc28 0fd0
.org 0xfcc2a
	movs r0, #128	@ 000fcc2a 8020
.org 0xfcc2c
	lsls r0, r0, #10	@ 000fcc2c 8002
.org 0xfcc2e
	ands r2, r0	@ 000fcc2e 0240
.org 0xfcc30
	cmp r2, #0	@ 000fcc30 002a
.org 0xfcc32
	beq.n 0xfcc4a	@ 000fcc32 0ad0
.org 0xfcc34
	ldr r0, [pc, #24]	@ 000fcc34 0648
.org 0xfcc36
	ldr r0, [r0, #0]	@ 000fcc36 0068
.org 0xfcc38
	cmp r0, #0	@ 000fcc38 0028
.org 0xfcc3a
	beq.n 0xfcc4a	@ 000fcc3a 06d0
.org 0xfcc3c
	movs r1, #5	@ 000fcc3c 0521
.org 0xfcc3e
	movs r2, #10	@ 000fcc3e 0a22
.org 0xfcc40
	bl 0x3a578	@ 000fcc40 3df79afc
.org 0xfcc44
	adds r1, r4, #0	@ 000fcc44 211c
.org 0xfcc46
	adds r1, #189	@ 000fcc46 bd31
.org 0xfcc48
	strb r0, [r1, #0]	@ 000fcc48 0870
.org 0xfcc4a
	pop {r4}	@ 000fcc4a 10bc
.org 0xfcc4c
	pop {r0}	@ 000fcc4c 01bc
.org 0xfcc4e
	bx r0	@ 000fcc4e 0047
