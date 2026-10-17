// undefined FUN_08053a98(void)
// entry 0x8053a98


undefined4 FUN_08053a98(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  ushort *puVar7;
  ushort *puVar8;
  undefined4 in_lr;
  
  piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08053c58);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 4);
  *(undefined1 *)(param_1 + 0xd) = 1;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  iVar5 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0xbc) = iVar5 + DAT_08053c5c;
  *(int *)(param_1 + 0x58) = iVar5 + DAT_08053c60;
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x54);
  *(undefined1 *)(param_1 + 0xb5) = 0;
  *(undefined1 *)(param_1 + 0xb7) = 0;
  *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0x58) + DAT_08053c64;
  *(byte *)(param_1 + 0xb6) = *(byte *)(param_1 + 0xb6) | 3;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  iVar1 = DAT_08053c6c;
  iVar5 = DAT_08053c68;
  FUN_08001d30(DAT_08053c68 + 0x370,
               ((uint)*(ushort *)(DAT_08053c6c + 0x58) -
               (uint)(*(ushort *)(DAT_08053c68 + 0x376) >> 6)) * 0x20 + 0x10000);
  iVar3 = DAT_08053c74;
  iVar2 = DAT_08053c70;
  FUN_08002208(DAT_08053c70 + 0x370,
               ((uint)*(ushort *)(DAT_08053c74 + 0x58) - (uint)*(byte *)(DAT_08053c70 + 0x377)) *
               0x20 + 0x200);
  FUN_08001d30(iVar5 + 900,
               ((uint)*(ushort *)(iVar1 + 0x5a) - (uint)(*(ushort *)(iVar5 + 0x38a) >> 6)) * 0x20 +
               0x10000);
  FUN_08002208(iVar2 + 900,
               ((uint)*(ushort *)(iVar3 + 0x5a) - (uint)*(byte *)(iVar2 + 0x38b)) * 0x20 + 0x200);
  puVar7 = (ushort *)(iVar1 + 0xa2);
  *puVar7 = (ushort)DAT_08053c78;
  puVar8 = (ushort *)(iVar3 + 0xa2);
  *puVar8 = 6;
  iVar1 = DAT_08053c7c;
  FUN_08001d30(DAT_08053c7c + iVar5,
               ((uint)*puVar7 - (uint)(*(ushort *)(DAT_08053c7c + iVar5 + 6) >> 6)) * 0x20 + 0x10000
              );
  FUN_08002208(iVar1 + iVar2,((uint)*puVar8 - (uint)*(byte *)(iVar1 + iVar2 + 7)) * 0x20 + 0x200);
  FUN_0801cc9c(param_1);
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0xc;
  *(undefined1 *)(param_1 + 0x25) = 0x1b;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  FUN_080503cc(param_1,DAT_08053c80,0x60);
  FUN_0800d7f4(0);
  iVar5 = param_1 + 0x54;
  uVar6 = FUN_0808dba4(param_1,iVar5,0,0);
  *(undefined4 *)(param_1 + 0xc4) = uVar6;
  uVar6 = FUN_0808dba4(param_1,iVar5,0,1);
  *(undefined4 *)(param_1 + 200) = uVar6;
  FUN_080da650(param_1,iVar5,0,0);
  FUN_080da650(param_1,iVar5,0,1);
  FUN_08053c84(param_1);
  return in_lr;
}


