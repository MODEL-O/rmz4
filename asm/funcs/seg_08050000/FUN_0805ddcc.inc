@ FUN_0805ddcc  entry 0x0805ddcc  size 124
.thumb
.org 0x5ddcc
FUN_0805ddcc:
	push {r4, r5, lr}	@ 0005ddcc 30b5
.org 0x5ddce
	adds r5, r0, #0	@ 0005ddce 051c
.org 0x5ddd0
	ldrb r0, [r5, #15]	@ 0005ddd0 e87b
.org 0x5ddd2
	cmp r0, #0	@ 0005ddd2 0028
.org 0x5ddd4
	bne.n 0x5ddea	@ 0005ddd4 09d1
.org 0x5ddd6
	movs r0, #92	@ 0005ddd6 5c20
.org 0x5ddd8
	bl 0x2b10	@ 0005ddd8 a4f79afe
.org 0x5dddc
	adds r0, r5, #0	@ 0005dddc 281c
.org 0x5ddde
	movs r1, #13	@ 0005ddde 0d21
.org 0x5dde0
	bl 0x5ee6c	@ 0005dde0 01f044f8
.org 0x5dde4
	ldrb r0, [r5, #15]	@ 0005dde4 e87b
.org 0x5dde6
	adds r0, #1	@ 0005dde6 0130
.org 0x5dde8
	strb r0, [r5, #15]	@ 0005dde8 e873
.org 0x5ddea
	adds r0, r5, #0	@ 0005ddea 281c
.org 0x5ddec
	bl 0x1cff0	@ 0005ddec bff700f9
.org 0x5ddf0
	adds r0, r5, #0	@ 0005ddf0 281c
.org 0x5ddf2
	adds r0, #116	@ 0005ddf2 7430
.org 0x5ddf4
	ldr r4, [pc, #80]	@ 0005ddf4 144c
.org 0x5ddf6
	ldr r3, [pc, #84]	@ 0005ddf6 154b
.org 0x5ddf8
	adds r1, r5, #0	@ 0005ddf8 291c
.org 0x5ddfa
	adds r1, #184	@ 0005ddfa b831
.org 0x5ddfc
	ldrb r2, [r1, #0]	@ 0005ddfc 0a78
.org 0x5ddfe
	lsls r1, r2, #1	@ 0005ddfe 5100
.org 0x5de00
	adds r1, r1, r3	@ 0005de00 c918
.org 0x5de02
	ldrh r1, [r1, #0]	@ 0005de02 0988
.org 0x5de04
	lsls r1, r1, #2	@ 0005de04 8900
.org 0x5de06
	adds r1, r1, r4	@ 0005de06 0919
.org 0x5de08
	adds r3, r5, #0	@ 0005de08 2b1c
.org 0x5de0a
	adds r3, #113	@ 0005de0a 7133
.org 0x5de0c
	movs r4, #0	@ 0005de0c 0024
.org 0x5de0e
	ldrsb r4, [r3, r4]	@ 0005de0e 1c57
.org 0x5de10
	ldr r1, [r1, #0]	@ 0005de10 0968
.org 0x5de12
	lsls r3, r4, #2	@ 0005de12 a300
.org 0x5de14
	adds r3, r3, r1	@ 0005de14 5b18
.org 0x5de16
	ldr r1, [pc, #56]	@ 0005de16 0e49
.org 0x5de18
	lsls r2, r2, #2	@ 0005de18 9200
.org 0x5de1a
	adds r2, r2, r1	@ 0005de1a 5218
.org 0x5de1c
	ldr r1, [r2, #0]	@ 0005de1c 1168
.org 0x5de1e
	adds r1, r1, r4	@ 0005de1e 0919
.org 0x5de20
	ldrb r1, [r1, #0]	@ 0005de20 0978
.org 0x5de22
	lsls r2, r1, #1	@ 0005de22 4a00
.org 0x5de24
	adds r2, r2, r1	@ 0005de24 5218
.org 0x5de26
	lsls r2, r2, #3	@ 0005de26 d200
.org 0x5de28
	ldr r1, [r3, #0]	@ 0005de28 1968
.org 0x5de2a
	adds r1, r1, r2	@ 0005de2a 8918
.org 0x5de2c
	bl 0x5784	@ 0005de2c a7f7aafc
.org 0x5de30
	adds r0, r5, #0	@ 0005de30 281c
.org 0x5de32
	adds r0, #115	@ 0005de32 7330
.org 0x5de34
	ldrb r0, [r0, #0]	@ 0005de34 0078
.org 0x5de36
	cmp r0, #4	@ 0005de36 0428
.org 0x5de38
	bne.n 0x5de42	@ 0005de38 03d1
.org 0x5de3a
	movs r1, #0	@ 0005de3a 0021
.org 0x5de3c
	movs r0, #1	@ 0005de3c 0120
.org 0x5de3e
	strb r0, [r5, #14]	@ 0005de3e a873
.org 0x5de40
	strb r1, [r5, #15]	@ 0005de40 e973
.org 0x5de42
	pop {r4, r5}	@ 0005de42 30bc
.org 0x5de44
	pop {r0}	@ 0005de44 01bc
.org 0x5de46
	bx r0	@ 0005de46 0047
