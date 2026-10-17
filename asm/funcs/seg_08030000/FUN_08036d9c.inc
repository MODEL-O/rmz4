@ FUN_08036d9c  entry 0x08036d9c  size 106
.thumb
.org 0x36d9c
FUN_08036d9c:
	push {r4, r5, lr}	@ 00036d9c 30b5
.org 0x36d9e
	adds r5, r0, #0	@ 00036d9e 051c
.org 0x36da0
	movs r0, #129	@ 00036da0 8120
.org 0x36da2
	lsls r0, r0, #1	@ 00036da2 4000
.org 0x36da4
	adds r4, r5, r0	@ 00036da4 2c18
.org 0x36da6
	ldrb r0, [r4, #0]	@ 00036da6 2078
.org 0x36da8
	cmp r0, #0	@ 00036da8 0028
.org 0x36daa
	bne.n 0x36dba	@ 00036daa 06d1
.org 0x36dac
	ldr r1, [pc, #60]	@ 00036dac 0f49
.org 0x36dae
	adds r0, r5, #0	@ 00036dae 281c
.org 0x36db0
	bl 0x1cf00	@ 00036db0 e6f7a6f8
.org 0x36db4
	ldrb r0, [r4, #0]	@ 00036db4 2078
.org 0x36db6
	adds r0, #1	@ 00036db6 0130
.org 0x36db8
	strb r0, [r4, #0]	@ 00036db8 2070
.org 0x36dba
	ldr r4, [pc, #48]	@ 00036dba 0c4c
.org 0x36dbc
	adds r0, r5, #0	@ 00036dbc 281c
.org 0x36dbe
	adds r1, r4, #0	@ 00036dbe 211c
.org 0x36dc0
	bl 0x3a3b0	@ 00036dc0 03f0f6fa
.org 0x36dc4
	adds r0, r5, #0	@ 00036dc4 281c
.org 0x36dc6
	adds r1, r4, #0	@ 00036dc6 211c
.org 0x36dc8
	bl 0x3a3f0	@ 00036dc8 03f012fb
.org 0x36dcc
	adds r0, r5, #0	@ 00036dcc 281c
.org 0x36dce
	adds r0, #115	@ 00036dce 7330
.org 0x36dd0
	ldrb r0, [r0, #0]	@ 00036dd0 0078
.org 0x36dd2
	cmp r0, #3	@ 00036dd2 0328
.org 0x36dd4
	bne.n 0x36e0a	@ 00036dd4 19d1
.org 0x36dd6
	ldrb r0, [r5, #14]	@ 00036dd6 a87b
.org 0x36dd8
	cmp r0, #1	@ 00036dd8 0128
.org 0x36dda
	bne.n 0x36df4	@ 00036dda 0bd1
.org 0x36ddc
	ldr r1, [pc, #16]	@ 00036ddc 0449
.org 0x36dde
	adds r0, r5, #0	@ 00036dde 281c
.org 0x36de0
	movs r2, #2	@ 00036de0 0222
.org 0x36de2
	movs r3, #1	@ 00036de2 0123
.org 0x36de4
	bl 0x1cfc8	@ 00036de4 e6f7f0f8
.org 0x36de8
	b.n 0x36e00	@ 00036de8 0ae0
.org 0x36dea
	.byte 0x00	@ 00036dea data
.org 0x36deb
	.byte 0x00	@ 00036deb data
.org 0x36dec
	.byte 0x05,0x19,0x00,0x00	@ 00036dec data
.org 0x36df0
	.byte 0x03,0x04,0x00,0x00	@ 00036df0 data
.org 0x36df4
	ldr r1, [pc, #24]	@ 00036df4 0649
.org 0x36df6
	adds r0, r5, #0	@ 00036df6 281c
.org 0x36df8
	movs r2, #2	@ 00036df8 0222
.org 0x36dfa
	movs r3, #1	@ 00036dfa 0123
.org 0x36dfc
	bl 0x1cfc8	@ 00036dfc e6f7e4f8
.org 0x36e00
	movs r0, #128	@ 00036e00 8020
.org 0x36e02
	lsls r0, r0, #1	@ 00036e02 4000
.org 0x36e04
	adds r1, r5, r0	@ 00036e04 2918
