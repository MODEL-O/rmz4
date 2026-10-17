// undefined FUN_08027e5c(void)
// entry 0x8027e5c


longlong FUN_08027e5c(int param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint in_lr;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint local_3c;
  uint uStack_38;
  uint uStack_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint uStack_20;
  
  iVar1 = DAT_08027f34;
  puVar3 = *(uint **)(*(int *)(param_1 + 0xc) + 4);
  local_48 = *puVar3;
  uStack_44 = puVar3[1];
  uStack_40 = puVar3[2];
  local_3c = puVar3[3];
  uStack_38 = puVar3[4];
  uStack_34 = puVar3[5];
  local_30 = puVar3[6];
  local_2c = puVar3[7];
  local_28 = puVar3[8];
  local_24 = puVar3[9];
  uStack_20 = puVar3[10];
  if (*(char *)(DAT_08027f34 + 0x18) == '\0') {
    FUN_08006d80(0,&stack0xffffffe4);
  }
  uVar2 = local_28;
  iVar5 = DAT_08027f40;
  if ((((*(ushort *)(DAT_08027f38 + 0x1d0) & 0x7f) == 4) &&
      (iVar6 = *(int *)((local_48 >> 0x10 & 0xff) * 0x10 + 0x10 + param_1), iVar6 != 0)) &&
     ((int)local_28 <= DAT_08027f3c)) {
    iVar4 = FUN_08128fb8(*(int *)(iVar6 + 0x54) + DAT_08027f40,0x3c000);
    local_2c = iVar4 * 0x3c000 + local_2c;
    iVar5 = FUN_08128fb8(*(int *)(iVar6 + 0x54) + iVar5,0x3c000);
    local_28 = iVar5 * 0x3c000 + uVar2;
  }
  FUN_0801f924(iVar1,&local_48);
  if ((((char)local_48 != '\x01') &&
      (iVar5 = *(int *)((local_48 >> 0x10 & 0xff) * 0x10 + 0x10 + param_1), iVar5 != 0)) &&
     (*(int *)(iVar1 + 0x48) = iVar5 + 0x54, (local_48 & 0x800) != 0)) {
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar5 + 0x54);
    *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(iVar5 + 0x58);
  }
  return (ulonglong)in_lr << 0x20;
}


