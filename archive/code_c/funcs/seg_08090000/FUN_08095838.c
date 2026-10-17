// undefined FUN_08095838(void)
// entry 0x8095838


undefined4 FUN_08095838(int param_1)

{
  byte bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(0xbb);
    *(uint *)(param_1 + 0x68) = (bVar1 >> 4 & 1) * -2 + 1;
    *(undefined4 *)(param_1 + 0x5c) = 0x440;
    *(undefined4 *)(param_1 + 100) = 0xfffffff0;
    *(undefined4 *)(param_1 + 0x60) = 0xb4;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  *(int *)(param_1 + 0x54) =
       *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x68) * *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar4 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x5c) = iVar4;
  if (iVar4 < DAT_080958ec) {
    *(int *)(param_1 + 0x5c) = DAT_080958ec;
  }
  FUN_08095cd8(param_1);
  uVar2 = FUN_0801fb14(DAT_080958f0,param_1 + 0x54);
  if (0x3000 < uVar2) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080958f4);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0xc);
  }
  return in_lr;
}


