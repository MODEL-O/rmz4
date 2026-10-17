// undefined FUN_0805d3e8(void)
// entry 0x805d3e8


undefined4 FUN_0805d3e8(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 in_lr;
  undefined1 auStack_2c [8];
  int local_24;
  int local_20;
  
  FUN_08129258(auStack_2c,DAT_0805d4f8,6);
  local_24 = *DAT_0805d4fc;
  local_20 = DAT_0805d4fc[1];
  bVar1 = *(byte *)(param_1 + 10);
  iVar6 = *DAT_0805d500;
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0805ee6c(param_1,auStack_2c[(uint)*(byte *)(param_1 + 0x10) * 2]);
    *(undefined4 *)(param_1 + 0x60) = 0x600;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       *(int *)((uint)*(ushort *)
                                       ((uint)*(byte *)(param_1 + 0xb8) * 2 + DAT_0805d508) * 4 +
                               DAT_0805d504)) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb8) * 4 + DAT_0805d50c) +
                              (int)*(char *)(param_1 + 0x71)) * 0x18);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  if ((iVar6 == 0) || ((*(uint *)(param_1 + 0x8c) & 0x800) == 0)) {
    *(undefined1 *)(param_1 + 0xe) = 7;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  else {
    *(undefined1 *)(iVar6 + DAT_0805d510) = 1;
    *(undefined1 *)(iVar6 + 0x172) = 0;
    *(undefined4 *)(iVar6 + 0x60) = 0;
    *(uint *)(iVar6 + 0x54) =
         *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0xc0) +
         local_24 * ((bVar1 >> 4 & 1) * 2 + -1);
    iVar2 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0xc4) + local_20;
    *(int *)(iVar6 + 0x58) = iVar2;
    piVar5 = (int *)(param_1 + 0xb4);
    if (iVar2 < *piVar5) {
      if (*(int *)(param_1 + 0x58) + 0x2400 < *piVar5) {
        return in_lr;
      }
      FUN_08098314(param_1,0,1);
      iVar2 = *piVar5;
      iVar6 = DAT_0805d53c;
    }
    else {
      FUN_08098314(param_1,0,1);
      iVar3 = *(int *)(iVar6 + 0x58);
      iVar4 = *piVar5;
      *(int *)(iVar6 + 0x58) = iVar4;
      iVar2 = *(int *)(param_1 + 0x58);
      iVar6 = iVar4 - iVar3;
    }
    *(int *)(param_1 + 0x58) = iVar2 + iVar6;
    *(undefined1 *)(param_1 + 0xe) = 5;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


