// undefined FUN_08104ef8(void)
// entry 0x8104ef8


undefined4 FUN_08104ef8(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_08104f80);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    if (*(int *)(*(int *)(param_1 + 0x28) + DAT_08104f84 + 0x14) != 0) {
      FUN_08002b10(DAT_08104f88);
    }
    FUN_08002b10(DAT_08104f8c);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_08105084(param_1);
  if ((*(char *)(param_1 + 0x73) == '\x03') && (*(char *)(param_1 + 0xb4) == '\0')) {
    iVar1 = *(int *)(param_1 + 0x28);
    if (*(int *)(iVar1 + DAT_08104f84 + 0x14) == 0) {
      piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08104f90);
      *(undefined4 *)(param_1 + 0xc) = 4;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0x10);
      return in_lr;
    }
    iVar5 = *(int *)(param_1 + 0xb8);
    iVar4 = *(int *)(param_1 + 0x58) - iVar5;
    if (iVar4 < 0) {
      iVar4 = iVar5 - *(int *)(param_1 + 0x58);
    }
    if ((uint)(iVar4 >> 8) < 0x10) {
      iVar5 = iVar1 + DAT_08104fbc;
      iVar4 = *(int *)(iVar5 + 8) + 3;
    }
    else if ((uint)(iVar4 >> 8) < 0x20) {
      iVar5 = iVar1 + DAT_08104fd0;
      iVar4 = *(int *)(iVar5 + 8) + 2;
    }
    else {
      iVar5 = iVar1 + DAT_08105004;
      iVar4 = *(int *)(iVar5 + 8) + 1;
    }
    *(int *)(iVar5 + 8) = iVar4;
    *(int *)(iVar1 + DAT_08105004 + 0x30) = *(int *)(iVar1 + DAT_08105004 + 0x30) + 1;
    if (*(int *)(param_1 + 0x2c) == 0) {
      if (*(char *)(param_1 + 0x11) == '\0') {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
        uVar3 = DAT_08105008;
      }
      else {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
        uVar3 = DAT_0810504c;
      }
      FUN_08005760(param_1 + 0x74,uVar3,param_1 + 0x54,1);
      *(int *)(param_1 + 0xa0) = param_1;
      *(undefined4 *)(param_1 + 0x98) = 0;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8);
      FUN_0801cf00(param_1,0xbd00);
      piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08105050);
      *(undefined4 *)(param_1 + 0xc) = 1;
      uVar3 = *(undefined4 *)(*piVar2 + 4);
    }
    else {
      *(undefined1 *)(*(int *)(param_1 + 0x2c) + 0x11) = *(undefined1 *)(param_1 + 0x11);
      *(undefined1 *)(*(int *)(param_1 + 0x2c) + 0xb5) = 1;
      piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08105080);
      *(undefined4 *)(param_1 + 0xc) = 4;
      uVar3 = *(undefined4 *)(*piVar2 + 0x10);
    }
    *(undefined4 *)(param_1 + 0x14) = uVar3;
  }
  FUN_0801cff0(param_1);
  return in_lr;
}


