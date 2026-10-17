// undefined FUN_080e4de4(void)
// entry 0x80e4de4


undefined4 FUN_080e4de4(int param_1)

{
  char cVar1;
  short sVar2;
  int *piVar3;
  int iVar4;
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  sVar2 = FUN_08007c7c();
  if (((sVar2 != 0) && (sVar2 != 0xf)) || (cVar1 = *(char *)(param_1 + 0x12), cVar1 == '\0')) {
    iVar4 = param_1 + 0x54;
    FUN_080d0c88(2,iVar4);
    FUN_08002b10(0x2a);
    if (*(char *)(param_1 + 0x11) == '\0') {
      FUN_080e4a54(iVar4,DAT_080e4e80,*(byte *)(param_1 + 10) >> 4 & 1);
    }
    if (*(char *)(param_1 + 0x11) == '\x02') {
      FUN_080e4a54(iVar4,0x102,*(byte *)(param_1 + 10) >> 4 & 1);
      FUN_080e4a54(iVar4,DAT_080e4e84,*(byte *)(param_1 + 10) >> 4 & 1);
    }
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e4e88);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
    cVar1 = *(char *)(param_1 + 0x12);
  }
  *(char *)(param_1 + 0x12) = cVar1 + -1;
  return in_lr;
}


