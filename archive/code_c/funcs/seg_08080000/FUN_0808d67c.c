// undefined FUN_0808d67c(void)
// entry 0x808d67c


undefined4 FUN_0808d67c(int param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  undefined4 in_lr;
  undefined4 local_28;
  int local_24;
  
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  local_28 = *(undefined4 *)(param_1 + 0x54);
  local_24 = *(int *)(param_1 + 0x58) + DAT_0808d7a4;
  FUN_080d0c88(1,&local_28);
  FUN_08002b10(0x2a);
  FUN_0802ab88(3,0x30,&local_28);
  iVar2 = DAT_0808d7b0;
  puVar1 = DAT_0808d7a8;
  uVar5 = DAT_0808d7ac * *DAT_0808d7a8 + DAT_0808d7b0;
  *DAT_0808d7a8 = uVar5 & 0x7fffffff;
  uVar5 = (uVar5 & 0x7fffffff) >> 0x10 & 3;
  FUN_080d9fbc(&local_28,0,DAT_0808d7b4,uVar5,0);
  FUN_080d9fbc(&local_28,0,DAT_0808d7b8,uVar5,0);
  uVar3 = DAT_0808d7bc;
  FUN_080d9fbc(&local_28,0,DAT_0808d7bc,uVar5,0);
  local_24 = local_24 + DAT_0808d7c0;
  FUN_080d0c88(2,&local_28);
  uVar5 = DAT_0808d7ac * *puVar1 + iVar2;
  *puVar1 = uVar5 & 0x7fffffff;
  uVar5 = (uVar5 & 0x7fffffff) >> 0x10 & 3;
  FUN_080d9fbc(&local_28,0,DAT_0808d7b4,uVar5,0);
  FUN_080d9fbc(&local_28,0,DAT_0808d7b8,uVar5,0);
  FUN_080d9fbc(&local_28,0,uVar3,uVar5,0);
  if (*(ushort *)(DAT_0808d7c4 + 0xc) <= DAT_0808d7c8) {
    *(ushort *)(DAT_0808d7c4 + 0xc) = *(ushort *)(DAT_0808d7c4 + 0xc) + 1;
  }
  FUN_0802abe0(param_1,param_1 + 0x54);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0808d7cc);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 0x10);
  return in_lr;
}


