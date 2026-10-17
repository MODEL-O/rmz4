// undefined FUN_080e926c(void)
// entry 0x80e926c


undefined4 FUN_080e926c(int param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x12) == '\0') {
    FUN_0801cc9c(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e92d8);
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
    if (*(char *)(param_1 + 0x11) == '\0') {
      if (*(char *)(param_1 + 0x7c) == '\x01') {
        uVar4 = FUN_080e8dd8(*(undefined4 *)(param_1 + 0x28),0x200,0);
        *(undefined4 *)(param_1 + 0x2c) = uVar4;
      }
    }
    else {
      iVar3 = FUN_080e8dd8(*(undefined4 *)(param_1 + 0x28),*(byte *)(param_1 + 0x11) - 1 | 0x400,
                           *(undefined2 *)(param_1 + 0x74));
      *(int *)(param_1 + 0x2c) = iVar3;
      if (iVar3 != 0) {
        *(undefined1 *)(iVar3 + 0x7c) = *(undefined1 *)(param_1 + 0x7c);
      }
    }
    bVar1 = *(byte *)(param_1 + 0x11);
    if (bVar1 < 2) {
      uVar5 = FUN_08129198(*(ushort *)(param_1 + 0x74),0x3c);
      iVar3 = FUN_08128fb8((uVar5 & 0xffff) * 0xa7,100);
      iVar3 = 100 - iVar3;
    }
    else {
      iVar3 = FUN_08128fb8(0xe10 - (uint)*(ushort *)(param_1 + 0x74),0x3c);
    }
    if ((bVar1 == 4) || (bVar1 == 1)) {
      iVar3 = FUN_08129120(iVar3,10);
    }
    else {
      iVar3 = FUN_08129198(iVar3,10);
    }
    if (bVar1 == 2) {
      FUN_0801cf00(param_1,*(undefined2 *)(DAT_080e93b0 + 0x14));
    }
    else {
      if (iVar3 == 10) {
        iVar3 = 0;
      }
      FUN_0801cf00(param_1,*(undefined2 *)(iVar3 * 2 + DAT_080e936c));
    }
    *(uint *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) + ((4 - (uint)*(byte *)(param_1 + 0x11)) * 0xf + 0x14) * 0x100 +
         DAT_080e93b4;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + DAT_080e93b8;
    *(undefined1 *)(param_1 + 0x12) = 0xb4;
    *(undefined1 *)(param_1 + 0xd) = 1;
    FUN_080e8ebc(param_1);
  }
  else {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  return in_lr;
}


