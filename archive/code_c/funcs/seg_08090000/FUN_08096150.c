// undefined FUN_08096150(void)
// entry 0x8096150


undefined4 FUN_08096150(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(0x35);
    uVar5 = 0;
    do {
      uVar4 = 0;
      uVar3 = uVar5 + 1;
      while (((int)uVar4 < 2 &&
             (iVar1 = FUN_080c3024(param_1,param_1 + 0x54,uVar5 & 0xff,uVar4 & 0xff), iVar1 != 0)))
      {
        *(char *)(param_1 + 0xb4) = *(char *)(param_1 + 0xb4) + '\x01';
        uVar4 = uVar4 + 1;
      }
      uVar5 = uVar3;
    } while ((int)uVar3 < 2);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if (*(char *)(param_1 + 0xb4) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08096220);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0xc);
  }
  return in_lr;
}


