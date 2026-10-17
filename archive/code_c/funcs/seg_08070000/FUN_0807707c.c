// undefined FUN_0807707c(void)
// entry 0x807707c


undefined4 FUN_0807707c(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08077188);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  *(undefined1 *)(param_1 + 0xd) = 1;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined1 *)(param_1 + 0xc4) = 0xff;
  *(undefined1 *)(param_1 + 0xb4) = 0xff;
  *(undefined1 *)(param_1 + 0xb5) = 0;
  *(undefined1 *)(param_1 + 0xb6) = 0xff;
  *(undefined1 *)(param_1 + 0xb7) = 0;
  *(undefined1 *)(param_1 + 0xc6) = 0;
  *(undefined1 *)(param_1 + 199) = 0;
  *(undefined2 *)(param_1 + 0xd4) = 0;
  *(undefined1 *)(param_1 + 0xd6) = 0xff;
  *(undefined1 *)(param_1 + 0xd7) = 0;
  *(bool *)(param_1 + 0xc5) = *(int *)(param_1 + 0xb8) + 0x7800 < *(int *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  FUN_0801cc9c(param_1);
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  FUN_080503cc(param_1,*(undefined4 *)*DAT_0807718c,0x60);
  FUN_08001d30(DAT_08077190,
               ((uint)*(ushort *)(DAT_08077194 + 0x138) - (uint)(*(ushort *)(DAT_08077190 + 6) >> 6)
               ) * 0x20 + 0x10000);
  FUN_08002208(DAT_08077198,
               ((uint)*(ushort *)(DAT_0807719c + 0x138) - (uint)*(byte *)(DAT_08077198 + 7)) * 0x20
               + 0x200);
  uVar2 = FUN_080ac648(param_1);
  *(undefined4 *)(param_1 + 200) = uVar2;
  uVar2 = FUN_080acb90(param_1);
  *(undefined4 *)(param_1 + 0xcc) = uVar2;
  FUN_080771a0(param_1);
  return in_lr;
}


