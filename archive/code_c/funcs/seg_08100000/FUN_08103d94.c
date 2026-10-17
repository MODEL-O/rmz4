// undefined FUN_08103d94(void)
// entry 0x8103d94


undefined4 FUN_08103d94(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  FUN_0801cc9c(param_1);
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
  *(undefined4 *)(param_1 + 0x30) = DAT_08103e3c;
  *(undefined2 *)(param_1 + 0x26) = 1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 6;
  FUN_08005760(param_1 + 0x74,DAT_08103e40,param_1 + 0x54,0);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x68) = 0;
  iVar1 = DAT_08103e44;
  iVar3 = *(int *)(param_1 + 0x58) +
          (uint)*(ushort *)((uint)*(byte *)(param_1 + 0x11) * 2 + DAT_08103e44) * -0x100 + 1;
  *(int *)(param_1 + 0x68) = iVar3;
  *(uint *)(param_1 + 0x58) =
       iVar3 + (uint)*(ushort *)((uint)*(byte *)(param_1 + 0x11) * 2 + iVar1) * 0x100;
  FUN_0801cf00(param_1,DAT_08103e48);
  *(short *)(param_1 + 0xb4) = (short)DAT_08103e4c;
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08103e50);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  FUN_08103e54(param_1);
  return in_lr;
}


