// undefined FUN_08027d68(void)
// entry 0x8027d68


undefined4 FUN_08027d68(int param_1)

{
  ushort uVar1;
  undefined2 *puVar2;
  uint uVar3;
  undefined4 in_lr;
  undefined1 local_c;
  undefined2 uStack_b;
  undefined2 uStack_7;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uVar1 = *(ushort *)(param_1 + 0x14e);
  uStack_4 = in_lr;
  if (uVar1 != 0) {
    uVar3 = *DAT_08027dc8 * DAT_08027dcc + DAT_08027dd0;
    *DAT_08027dc8 = uVar3 & 0x7fffffff;
    uVar3 = (uVar3 & 0x7fffffff) >> 0x10 & 0xf;
    if (uVar3 <= (uVar1 & 0xff)) {
      FUN_0801fe64(uVar3,DAT_08027dd4);
    }
    if (*(char *)(DAT_08027dd8 + 0x18) == '\0') {
      FUN_0801febc(DAT_08027dd8 + 0x30,&local_c);
      puVar2 = DAT_08027ddc;
      *DAT_08027ddc = uStack_b;
      puVar2[1] = uStack_7;
    }
  }
  return uStack_4;
}


