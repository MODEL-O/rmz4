@ FUN_080abbb8  entry 0x080abbb8  size 72
.thumb
.org 0xabbb8
FUN_080abbb8:
	push {lr}	@ 000abbb8 00b5
.org 0xabbba
	adds r2, r0, #0	@ 000abbba 021c
.org 0xabbbc
	ldrb r0, [r2, #15]	@ 000abbbc d07b
.org 0xabbbe
	cmp r0, #0	@ 000abbbe 0028
.org 0xabbc0
	bne.n 0xabbd6	@ 000abbc0 09d1
.org 0xabbc2
	adds r1, r2, #0	@ 000abbc2 111c
.org 0xabbc4
	adds r1, #188	@ 000abbc4 bc31
.org 0xabbc6
	ldrb r0, [r1, #0]	@ 000abbc6 0878
.org 0xabbc8
	adds r0, #1	@ 000abbc8 0130
.org 0xabbca
	strb r0, [r1, #0]	@ 000abbca 0870
.org 0xabbcc
	movs r0, #8	@ 000abbcc 0820
.org 0xabbce
	strb r0, [r2, #18]	@ 000abbce 9074
.org 0xabbd0
	ldrb r0, [r2, #15]	@ 000abbd0 d07b
.org 0xabbd2
	adds r0, #1	@ 000abbd2 0130
.org 0xabbd4
	strb r0, [r2, #15]	@ 000abbd4 d073
.org 0xabbd6
	ldrb r0, [r2, #18]	@ 000abbd6 907c
.org 0xabbd8
	subs r0, #1	@ 000abbd8 0138
.org 0xabbda
	strb r0, [r2, #18]	@ 000abbda 9074
.org 0xabbdc
	movs r1, #8	@ 000abbdc 0821
.org 0xabbde
	subs r1, r1, r0	@ 000abbde 091a
.org 0xabbe0
	lsls r1, r1, #24	@ 000abbe0 0906
.org 0xabbe2
	lsrs r1, r1, #19	@ 000abbe2 c90c
.org 0xabbe4
	adds r0, r2, #0	@ 000abbe4 101c
.org 0xabbe6
	adds r0, #194	@ 000abbe6 c230
.org 0xabbe8
	movs r3, #0	@ 000abbe8 0023
.org 0xabbea
	strh r1, [r0, #0]	@ 000abbea 0180
.org 0xabbec
	ldrb r0, [r2, #18]	@ 000abbec 907c
.org 0xabbee
	cmp r0, #0	@ 000abbee 0028
.org 0xabbf0
	bne.n 0xabbfc	@ 000abbf0 04d1
.org 0xabbf2
	ldrb r0, [r2, #13]	@ 000abbf2 507b
.org 0xabbf4
	adds r0, #1	@ 000abbf4 0130
.org 0xabbf6
	strb r0, [r2, #13]	@ 000abbf6 5073
.org 0xabbf8
	strb r3, [r2, #14]	@ 000abbf8 9373
.org 0xabbfa
	strb r3, [r2, #15]	@ 000abbfa d373
.org 0xabbfc
	pop {r0}	@ 000abbfc 01bc
.org 0xabbfe
	bx r0	@ 000abbfe 0047
