// undefined FUN_080b6770(void)
// entry 0x80b6770


undefined4 FUN_080b6770(int param_1)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  byte abStack_28 [4];
  int local_24 [4];
  
  local_24[1] = DAT_080b67d8[1];
  local_24[0] = *DAT_080b67d8;
  FUN_08129258(abStack_28,DAT_080b67dc,2);
  iVar5 = *(int *)(param_1 + 0x28);
  uVar4 = (uint)*(byte *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(DAT_080b67e0);
    FUN_08005784(param_1 + 0x74,(uint)abStack_28[uVar4] * 0x18 + DAT_080b67e4);
    FUN_0801cf00(param_1,(short)local_24[uVar4]);
    if (uVar4 == 1) {
      local_24[2] = *(int *)(*DAT_080b67e8 + 0x54);
      local_24[3] = *(int *)(*DAT_080b67e8 + 0x58) + DAT_080b67ec;
    }
    else {
      local_24[2] = *(int *)(iVar5 + 0xb4) + 0x7800;
      local_24[3] = *(int *)(iVar5 + 0xb8) + 0x4800;
    }
    uVar4 = FUN_0810d3ac(param_1 + 0x54,local_24 + 2);
    iVar5 = DAT_080b68ac;
    iVar2 = *(short *)(((uVar4 & 0xff) + 0x40 & 0xff) * 2 + DAT_080b68ac) * 0x380;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar2 >> 8;
    iVar5 = *(short *)((uVar4 & 0xff) * 2 + iVar5) * 0x380;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    *(int *)(param_1 + 0x60) = iVar5 >> 8;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  local_24[2] = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = local_24[2];
  local_24[3] = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = local_24[3];
  local_24[3] = local_24[3] + 0x400;
  sVar1 = FUN_08007c7c(local_24[2]);
  if (sVar1 == 0) {
    uVar4 = FUN_0801fb14(DAT_080b6904,param_1 + 0x54);
    if (0x2000 < uVar4) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined1 *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080b6908);
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0xc);
    }
  }
  else {
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080b68b0);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
    FUN_080b690c(param_1);
  }
  return in_lr;
}


