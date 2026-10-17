// undefined FUN_080ace70(void)
// entry 0x80ace70


undefined4 FUN_080ace70(int param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  undefined4 local_14 [2];
  
  local_14[0] = *DAT_080acec0;
  local_14[1] = DAT_080acec0[1];
  iVar3 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(iVar3 + 0xba);
  if ((*(byte *)(iVar3 + 0xc) < 2) && ((*(uint *)(param_1 + 0x8c) & 0x200) == 0)) {
    if ((*(char *)(param_1 + 0xd) != '\0') && (*(char *)(param_1 + 0xd) != *(char *)(iVar3 + 0xb7)))
    {
      *(char *)(param_1 + 0xd) = *(char *)(iVar3 + 0xb7);
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
    FUN_0801d3d0(param_1,*(undefined1 *)
                          (local_14 + ((int)(uint)bVar1 >> *(sbyte *)(param_1 + 0x11) & 1)));
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080acf04));
  }
  else {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080acec4);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    FUN_080ad364(param_1);
  }
  return in_lr;
}


