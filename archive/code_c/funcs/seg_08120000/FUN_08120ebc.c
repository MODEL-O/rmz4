// undefined FUN_08120ebc(void)
// entry 0x8120ebc


undefined4 FUN_08120ebc(int param_1)

{
  ushort *puVar1;
  int iVar2;
  undefined4 in_lr;
  
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined4 *)(DAT_08120f74 + 0xc) = 0;
  FUN_08122690(param_1);
  puVar1 = DAT_08120f78;
  *DAT_08120f78 = (ushort)DAT_08120f7c & *DAT_08120f78 & (ushort)DAT_08120f80 | 0x1300;
  puVar1[3] = (ushort)DAT_08120f84;
  puVar1[8] = 0;
  puVar1[9] = 0;
  FUN_0800249c(0x33,0);
  FUN_0800249c(0x79,0);
  FUN_08001ea4(DAT_08120f88,(puVar1[3] & 0xc) << 0xc);
  FUN_08002208(DAT_08120f8c,0);
  iVar2 = DAT_08120f90 + param_1;
  FUN_080027b8(iVar2,DAT_08120f94,0x23,0,0);
  FUN_08001f1c(iVar2,(puVar1[3] & 0x1f00) << 3,0x1000);
  iVar2 = param_1 + DAT_08120f98;
  *(undefined1 *)(iVar2 + 2) = 0;
  *(undefined1 *)(iVar2 + 0xc) = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  FUN_08120f9c(param_1);
  return in_lr;
}


