// undefined FUN_080fbc14(void)
// entry 0x80fbc14


undefined4 FUN_080fbc14(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  byte *pbVar4;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  FUN_0801cff0();
  if (*(char *)(param_1 + 0xd) == '\0') {
    FUN_0801cff0(param_1);
    if ((*(uint *)(param_1 + 0x8c) & 0x200) != 0) {
      FUN_08002b10(0x17a);
      uVar3 = *(uint *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_080fbcb8);
      pbVar4 = (byte *)((uVar3 >> 3) + DAT_080fbcb4 + 4);
      *pbVar4 = (byte)(1 << (uVar3 & 7)) | *pbVar4;
      FUN_0801cf00(param_1,DAT_080fbcbc);
      FUN_0801cff0(param_1);
      *(uint *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined1 *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      FUN_080dd60c(param_1,param_1 + 0x54,8,0,1);
      FUN_080dd60c(param_1,param_1 + 0x54,8,1,0);
      *(undefined4 *)(param_1 + 100) = 900;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  }
  else {
    if ((*(uint *)(param_1 + 100) & 7) == 0) {
      local_1c = *(int *)(param_1 + 0x54) + DAT_080fbd30;
      local_18 = *(int *)(param_1 + 0x58) + 0x1600;
      FUN_08049300(&local_1c,0,0);
      local_1c = *(int *)(param_1 + 0x54) + 0x1800;
      FUN_08049300(&local_1c,0,1);
    }
    iVar1 = *(int *)(param_1 + 100);
    *(int *)(param_1 + 100) = iVar1 + -1;
    if (iVar1 == 0) {
      FUN_08002b5c(0x17a);
      piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080fbd34);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
      FUN_080fbd38(param_1);
    }
  }
  return in_lr;
}


