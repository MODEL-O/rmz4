// undefined FUN_0808d92c(void)
// entry 0x808d92c


undefined4 FUN_0808d92c(int param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  uint *puVar3;
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
  local_24 = *(int *)(param_1 + 0x58) + DAT_0808da74;
  FUN_080d0c88(1,&local_28);
  puVar3 = (uint *)(param_1 + 0xb4);
  FUN_08002b10(0x2a);
  FUN_0802ab88(3,0x30,&local_28);
  puVar1 = DAT_0808da78;
  uVar5 = DAT_0808da7c * *DAT_0808da78 + DAT_0808da80;
  *DAT_0808da78 = uVar5 & 0x7fffffff;
  uVar5 = (uVar5 & 0x7fffffff) >> 0x10 & 3;
  FUN_080d9fbc(&local_28,*puVar3 >> 0x1f,DAT_0808da84,uVar5,1);
  FUN_080d9fbc(&local_28,*puVar3 >> 0x1f,DAT_0808da88,uVar5,1);
  uVar2 = DAT_0808da8c;
  FUN_080d9fbc(&local_28,*puVar3 >> 0x1f,DAT_0808da8c,uVar5,1);
  local_24 = local_24 + DAT_0808da90;
  FUN_080d0c88(2,&local_28);
  uVar5 = DAT_0808da7c * *puVar1 + DAT_0808da80;
  *puVar1 = uVar5 & 0x7fffffff;
  uVar5 = (uVar5 & 0x7fffffff) >> 0x10 & 3;
  FUN_080d9fbc(&local_28,*puVar3 >> 0x1f,DAT_0808da84,uVar5,1);
  FUN_080d9fbc(&local_28,*puVar3 >> 0x1f,DAT_0808da88,uVar5,1);
  FUN_080d9fbc(&local_28,*puVar3 >> 0x1f,uVar2,uVar5,1);
  if (*(ushort *)(DAT_0808da94 + 0xc) <= DAT_0808da98) {
    *(ushort *)(DAT_0808da94 + 0xc) = *(ushort *)(DAT_0808da94 + 0xc) + 1;
  }
  FUN_0802abe0(param_1,param_1 + 0x54);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0808da9c);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 0x10);
  return in_lr;
}


