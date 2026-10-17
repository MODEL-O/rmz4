// undefined FUN_080a7dd4(void)
// entry 0x80a7dd4


undefined4 FUN_080a7dd4(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_080a7e34);
    FUN_08005784(param_1 + 0x74,DAT_080a7e38);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0xb4);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0xb8);
    *(undefined1 *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x02';
  if (*(char *)(param_1 + 0x11) == '\0') {
    iVar2 = *(int *)(param_1 + 0xb4) +
            *(short *)((uint)*(byte *)(param_1 + 0x12) * 2 + DAT_080a7e98) * 8;
    iVar3 = DAT_080a7e98;
  }
  else {
    iVar2 = *(int *)(param_1 + 0xb4) +
            *(short *)((uint)*(byte *)(param_1 + 0x12) * 2 + DAT_080a7e3c) * -8;
    iVar3 = DAT_080a7e3c;
  }
  *(int *)(param_1 + 0x54) = iVar2;
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0xb8) + *(short *)((uint)*(byte *)(param_1 + 0x12) * 2 + iVar3) * 4;
  *(short *)(param_1 + 0xbc) = *(short *)((uint)*(byte *)(param_1 + 0x12) * 2 + iVar3) * -4 + 0x800;
  if (*(char *)(param_1 + 0xbe) == '\0') {
    if (*(char *)(param_1 + 0xbf) == '\0') {
      if (*(char *)(param_1 + 0xc0) == '\0') {
        if (*(char *)(iVar4 + 0xd) != '\x04') {
          return in_lr;
        }
        *(int *)(param_1 + 0x54) =
             *(int *)(param_1 + 0x54) + (*(int *)(iVar4 + 0x54) - *(int *)(iVar4 + 0xb4));
        *(int *)(param_1 + 0x58) =
             *(int *)(param_1 + 0x58) + (*(int *)(iVar4 + 0x58) - *(int *)(iVar4 + 0xb8));
        return in_lr;
      }
      uVar1 = 3;
    }
    else {
      uVar1 = 2;
    }
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 0xd) = uVar1;
  *(undefined1 *)(param_1 + 0xe) = 0;
  return in_lr;
}


