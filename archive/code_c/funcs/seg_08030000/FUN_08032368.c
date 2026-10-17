// undefined FUN_08032368(void)
// entry 0x8032368


undefined4 FUN_08032368(int param_1)

{
  short sVar1;
  undefined2 uVar2;
  short *psVar3;
  int iVar4;
  undefined4 in_lr;
  
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xf) * 4 + DAT_080323ec));
  psVar3 = (short *)(param_1 + 0x138);
  if (*psVar3 != 0) {
    *psVar3 = *psVar3 + -1;
  }
  if ((*(char *)(param_1 + 0x73) == '\x03') && (*psVar3 == 0)) {
    if (*(char *)(param_1 + 0xf) == '\x02') {
      FUN_0801cfc8(param_1,DAT_080323f0,2,1);
      *(undefined1 *)(param_1 + 0xd) = 1;
      *(undefined1 *)(param_1 + 0xe) = 2;
      *(undefined1 *)(param_1 + 0xf) = 1;
      iVar4 = *(int *)(param_1 + 0x5c);
      if (iVar4 < 0) {
        iVar4 = -iVar4;
      }
      sVar1 = FUN_080386d4(param_1);
      if (sVar1 <= iVar4) {
        iVar4 = *(int *)(param_1 + 0x5c);
        if (iVar4 < 0) {
          iVar4 = -iVar4;
        }
        if (iVar4 < 0x381) {
          return in_lr;
        }
      }
      sVar1 = FUN_080386d4(param_1);
      *(int *)(param_1 + 0x5c) = (int)sVar1;
    }
    else {
      uVar2 = FUN_0802b7d8(param_1);
      FUN_0801cf00(param_1,uVar2);
      *(undefined1 *)(param_1 + 0xd) = 0;
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xf) = 1;
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
  }
  return in_lr;
}


