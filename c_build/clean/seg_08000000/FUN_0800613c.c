// undefined FUN_0800613c(void)
// entry 0x800613c


undefined4 FUN_0800613c(int param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  bVar2 = *(byte *)(param_2 + 0x3b) | *(byte *)(*(int *)(param_2 + 4) + 9);
  if ((*(int *)DAT_08006160 & 0x80) == 0) {
    if ((bVar2 & 2) == 0) {
      *(short *)(param_2 + 0x30) = *(short *)(param_2 + 0x30) + -1;
      *(int *)(param_2 + 0xc) = param_1;
      *(uint *)(param_2 + 0x18) = *(uint *)(param_2 + 0x18) | 1;
      *(byte *)(param_2 + 0x23) =
           *(byte *)(*(int *)(param_1 + 4) + 4) & 0xf | *(char *)(param_1 + 0x38) << 4;
      *(undefined1 *)(param_2 + 0x22) = *(undefined1 *)(param_1 + 0x3a);
      if (*(short *)(param_2 + 0x30) < 1) {
        *(ushort *)(param_2 + 0x30) = bVar2 & 2;
        *(uint *)(param_2 + 0x18) = *(uint *)(param_2 + 0x18) | 0x200;
      }
      cVar1 = *(char *)(*(int *)(param_2 + 4) + 2);
      if ((cVar1 == '\x01') || (cVar1 == '\x02')) {
        *(undefined1 *)(param_2 + 0x20) = 0x5a;
      }
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


