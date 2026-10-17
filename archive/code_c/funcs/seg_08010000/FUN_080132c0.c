// undefined FUN_080132c0(void)
// entry 0x80132c0


undefined4 FUN_080132c0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = DAT_080132f4;
  iVar2 = ((*(uint *)(param_1 + 0x5c) & 0xffff) >> 4) * 4;
  *(ushort *)(iVar2 + DAT_080132f4) =
       (*(ushort *)(param_1 + 0x68) >> 4) -
       ((short)*(undefined4 *)(param_1 + 0x6c) - (short)*(undefined4 *)(param_1 + 0x34));
  *(short *)(iVar2 + iVar1 + 2) = (short)((uint)(*(int *)(param_1 + 0x38) * 3) >> 2);
  return in_lr;
}


