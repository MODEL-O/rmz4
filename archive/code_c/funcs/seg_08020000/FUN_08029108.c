// undefined FUN_08029108(void)
// entry 0x8029108


undefined8 FUN_08029108(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0xc);
  bVar1 = *(byte *)(iVar3 + 1);
  if (bVar1 == 1) {
    *(char *)((int)*(short *)(iVar3 + 2) + DAT_08029150 + DAT_08029154) =
         (char)*(undefined4 *)(iVar3 + 4);
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      FUN_08006e94();
      FUN_08006a94((int)*(short *)(*(int *)(param_1 + 0xc) + 2),DAT_08029138);
    }
  }
  else if (bVar1 == 2) {
    if ((uint)*(byte *)((int)*(short *)(iVar3 + 2) + DAT_08029178 + DAT_0802917c) !=
        *(uint *)(iVar3 + 4)) {
      *(int *)(param_1 + 0xc) = iVar3 + -8;
    }
    uVar2 = 1;
    goto LAB_08029182;
  }
  uVar2 = 0;
LAB_08029182:
  return CONCAT44(in_lr,uVar2);
}


