@ FUN_080f5970  entry 0x080f5970  size 88
.thumb
.org 0xf5970
FUN_080f5970:
	push {r4, r5, r6, lr}	@ 000f5970 70b5
.org 0xf5972
	sub sp, #8	@ 000f5972 82b0
.org 0xf5974
	adds r4, r0, #0	@ 000f5974 041c
.org 0xf5976
	movs r6, #183	@ 000f5976 b726
.org 0xf5978
	lsls r6, r6, #12	@ 000f5978 3603
.org 0xf597a
	str r6, [sp, #0]	@ 000f597a 0096
.org 0xf597c
	movs r0, #128	@ 000f597c 8020
.org 0xf597e
	lsls r0, r0, #10	@ 000f597e 8002
.org 0xf5980
	str r0, [sp, #4]	@ 000f5980 0190
.org 0xf5982
	mov r0, sp	@ 000f5982 6846
.org 0xf5984
	movs r1, #1	@ 000f5984 0121
.org 0xf5986
	movs r2, #0	@ 000f5986 0022
.org 0xf5988
	bl 0xf5308	@ 000f5988 fff7befc
.org 0xf598c
	adds r5, r4, #0	@ 000f598c 251c
.org 0xf598e
	adds r5, #180	@ 000f598e b435
.org 0xf5990
	str r0, [r5, #0]	@ 000f5990 2860
.org 0xf5992
	movs r0, #185	@ 000f5992 b920
.org 0xf5994
	lsls r0, r0, #12	@ 000f5994 0003
.org 0xf5996
	str r0, [sp, #0]	@ 000f5996 0090
.org 0xf5998
	movs r0, #152	@ 000f5998 9820
.org 0xf599a
	lsls r0, r0, #10	@ 000f599a 8002
.org 0xf599c
	str r0, [sp, #4]	@ 000f599c 0190
.org 0xf599e
	mov r0, sp	@ 000f599e 6846
.org 0xf59a0
	movs r1, #1	@ 000f59a0 0121
.org 0xf59a2
	movs r2, #0	@ 000f59a2 0022
.org 0xf59a4
	bl 0xf5308	@ 000f59a4 fff7b0fc
.org 0xf59a8
	adds r4, #184	@ 000f59a8 b834
.org 0xf59aa
	str r0, [r4, #0]	@ 000f59aa 2060
.org 0xf59ac
	str r6, [sp, #0]	@ 000f59ac 0096
.org 0xf59ae
	movs r0, #136	@ 000f59ae 8820
.org 0xf59b0
	lsls r0, r0, #10	@ 000f59b0 8002
.org 0xf59b2
	str r0, [sp, #4]	@ 000f59b2 0190
.org 0xf59b4
	mov r0, sp	@ 000f59b4 6846
.org 0xf59b6
	movs r1, #1	@ 000f59b6 0121
.org 0xf59b8
	movs r2, #0	@ 000f59b8 0022
.org 0xf59ba
	bl 0xf5308	@ 000f59ba fff7a5fc
.org 0xf59be
	str r0, [r5, #0]	@ 000f59be 2860
.org 0xf59c0
	add sp, #8	@ 000f59c0 02b0
.org 0xf59c2
	pop {r4, r5, r6}	@ 000f59c2 70bc
.org 0xf59c4
	pop {r0}	@ 000f59c4 01bc
.org 0xf59c6
	bx r0	@ 000f59c6 0047
