// undefined FUN_0810a4b8(void)
// entry 0x810a4b8


undefined4 FUN_0810a4b8(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  cVar1 = *(char *)(iVar4 + DAT_0810a4f0);
  if (*(char *)(param_1 + 0x11) != cVar1) {
    if (cVar1 == *(char *)(param_1 + 0x10)) {
      if (cVar1 == '\x04') {
        FUN_0801cfc8(param_1,*(short *)((uint)*(byte *)(param_1 + 0x10) * 2 + DAT_0810a4f4) + 1,1,4)
        ;
      }
      else {
        FUN_0801cfc8(param_1,*(short *)((uint)*(byte *)(param_1 + 0x10) * 2 + DAT_0810a514) + 1,2,
                     0x10);
      }
    }
    else {
      FUN_0801cf00(param_1,*(undefined2 *)((uint)*(byte *)(param_1 + 0x10) * 2 + DAT_0810a5a4));
    }
    *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(iVar4 + DAT_0810a5a8);
  }
  if ((*(char *)(iVar4 + 3) != '\0') &&
     (*(char *)(iVar4 + DAT_0810a5a8) == *(char *)(param_1 + 0x10))) {
    FUN_0801cfc8(param_1,*(short *)((uint)*(byte *)(param_1 + 0x10) * 2 + DAT_0810a5a4) + 1,2,0x10);
  }
  FUN_0801cff0(param_1);
  iVar3 = (uint)*(byte *)((uint)*(byte *)(param_1 + 0x10) + DAT_0810a5ac) * 0x100;
  *(int *)(param_1 + 0x54) = iVar3;
  *(uint *)(param_1 + 0x58) = (uint)*(byte *)((uint)*(byte *)(param_1 + 0x10) + DAT_0810a5b0) << 8;
  if (*(char *)(iVar4 + DAT_0810a5a8 + 2) == '\0') {
    if (0x100 < *DAT_0810a5d4) {
      *(int *)(param_1 + 0x54) = iVar3 + 0x20000;
    }
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0810a5b4);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0xc);
  }
  return in_lr;
}


