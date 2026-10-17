// undefined FUN_080a4fa0(void)
// entry 0x80a4fa0


undefined4 FUN_080a4fa0(int param_1)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  ushort *puVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  bVar1 = *(byte *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(0x40);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  puVar4 = (ushort *)(param_1 + 0x52);
  uVar2 = *puVar4 + 0x10;
  *puVar4 = uVar2;
  iVar5 = *(short *)(((uint)uVar2 * 0x2000000 + 0x80000000 >> 0x17) + DAT_080a5020) * 0x10;
  uVar3 = *DAT_080a5024 * DAT_080a5028 + DAT_080a502c;
  *DAT_080a5024 = uVar3 & 0x7fffffff;
  iVar6 = (((uVar3 & 0x7fffffff) >> 0x10 & 7) - 3) * 0x100;
  if (bVar1 == 1) {
    local_2c = *(int *)(param_1 + 0x54) + iVar6;
    local_28 = *(int *)(param_1 + 0x58) + iVar5;
    local_24 = 0x80;
    local_20 = 0;
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      local_2c = *(int *)(param_1 + 0x54) + iVar6;
      local_28 = *(int *)(param_1 + 0x58) + iVar5;
      local_24 = 0xffffff80;
      local_20 = 0;
    }
  }
  else {
    if (bVar1 == 2) {
      local_2c = *(int *)(param_1 + 0x54);
      local_28 = *(int *)(param_1 + 0x58);
      local_20 = 0xffffff80;
    }
    else {
      if (bVar1 != 3) goto LAB_080a509a;
      local_2c = *(int *)(param_1 + 0x54);
      local_28 = *(int *)(param_1 + 0x58);
      local_20 = 0x80;
    }
    local_28 = local_28 + iVar6;
    local_2c = local_2c + iVar5;
    local_24 = 0;
  }
LAB_080a509a:
  FUN_080d9b9c(&local_2c,&local_24,0,0);
  if (0xff < uVar2) {
    *puVar4 = 0x100;
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


